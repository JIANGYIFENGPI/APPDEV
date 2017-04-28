#This is version 1 of git example.

-------------------------------------------
		Acoustic Sensor using RPi3
-------------------------------------------
#Written by JIANG YIFENG
#https://github.com/JIANGYIFENGPI/APPDEV/tree/master/APPDEV

Table of Content
1.Configuration Instructions
2.Installation Instructions
3.Operation instructions
4.List of project files
5.Personal Information


1. Configuration Instructions

This section contains 2 parts: hardware configurations and software configuration.

	1.1 Hardware configuration
	
	This project is built on a Raspberry pi3, with a USB sound card and a microphone.
	Ethernet connection is recommeded. If an older version of Raspberry Pi is used,
	certain change might be necessary.
	
	1.2 Software configuration:
	
			The USB sound card has to be set as default audio device.
			To do so, you need to modify two files with following contents:
	
		first you have to set USB sound card as default audio device.
	
		second you need to downgrade the alsa-utils from 1.0.28 to 1.0.25.
	
			a) type “lsusb” command. You can check whether sound card is OK.
			b) type "sudo nano /etc/asound.conf" command and put the following content:
	
				pcm.!default {
				  type plug
				  slave {
				    pcm "hw:1,0"	
				  }
				}
				ctl.!default {
				    type hw
				    card 1
				}
	
			c) Go to your home directory. Use “nano .asoundrc” command and put the same content to the file.
			d) Run “alsamixer” you should be able to see that USB sound card is the default audio device

2. Installation Instructions
	a) Open Terminal Windows 
	b) Change your terminal to UTF-8
	c) Type "make" to compile and link all the source code

3. Operation Instructions
	a) After the installation, type"./wave.a" in the project folder.
	b) View in DEBUG mode, where you can see the file WAV header: type"wave.h" and add line "#define DEBUG".
	c) View in COMM  mode, where your program will send the record information to the server: type "comm.h" and add line "#define COMM".
	d) Stop the program 

4. List of project files
The project contains following files:
1)README.md : this file
2)makefile  : the makefile of this project
3)wave.c    : the module containing functions about wave processing
4)wave.h    : the header of wave.c
5)screen.c  : the module contaububg functions about screen manipulation
6)screen.h  : the header of screen.c
7)comm.c    : the communication module using libcurl
8)comm.h    : the header file of comm.c
9)main.c    : contains main() function
10)sound.php : the server page to receive data

5. Personal Information
If i got any problem in this project,i hope you can contact me
student number:e1601134
email:472231536@qq.com

