/*
 * Sends on/off toggle signal to TV every 5 seconds.
 * Inspired by IRremote: IRsendDemo (by Ken Shirriff)
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 March, 2018
 * Copyright 2018 Otavio Carneiro
 * http://www.carneiro.blog.br
 */


#include <IRremote.h>

IRsend irsend;

void setup()
{
}

void loop() {
	for (int i = 0; i < 3; i++) {
    //20DF10EF com 32 bits eh o codigo para desligar
    //  a TV/monitor LG M237WA
		irsend.sendNEC(0x20DF10EF, 32);
		delay(40);
	}
	delay(5000); //5 second delay between each signal burst
}
