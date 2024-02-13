# New-GM328A
My New GM328A with ATMEGA328P (Not removable)


![WIN_20240213_00_16_46_Pro](https://github.com/carl1961/New-GM328A/assets/3056821/8fc9be2f-b6c5-4626-9211-0118ede7268a)

How I Compiled files On Windows 11 Windows Subsystem for Linux (Ubunti Jammy)

How to install Linux on Windows with WSL  https://learn.microsoft.com/en-us/windows/wsl/install

After Installing you can access you linux drive with Windows Explorer. I created short cuts on my desktop
example   \\wsl.localhost\Ubuntu-22.04\home\carl\New-GM328A\ComponentTester-1.51m

![GM328A_Programing_Setup](https://github.com/carl1961/New-GM328A/assets/3056821/3a151028-bf4d-4c7c-a00e-a6f73a3b285a)


I did all the code working in Windows Explorer and only used linux to run (make) 
One issues is, always refrech Windows Explorer to update the files before coping them to your firmware uploader. I used 
the latest AVRDUDESS which is called version AVRDUDESS 2.6 on theier web site. I have a compiled copy here on github.

https://github.com/ZakKemble/AVRDUDESS    


I greated a GitHub and uploaded the files needed all unpacked and ready.


Karl-Heinz Kübbeler (kubi48) TransistorTester 1.13k    and also  Markus Reschke (madires) ComponentTester 1.51m

https://github.com/kubi48/TransistorTester-source

https://www.mikrocontroller.net/articles/AVR_Transistortester

https://github.com/madires/Transistortester-Warehouse

https://www.eevblog.com/forum/testgear/$20-lcr-esr-transistor-checker-project/

Great Reading here

https://github.com/madires/Transistortester-Warehouse/blob/master/Documentation/English/FAQ.Feliciano.pdf

https://github.com/madires/Transistortester-Warehouse/blob/master/Documentation/English/Mini-FAQ.indman.pdf

https://github.com/madires/Transistortester-Warehouse/blob/master/Documentation/English/Clone-Comparison-Chart.pdf



# Setting up System

sudo apt-get update

sudo apt-get install build-essential pkg-config git libusb-1.0-0-dev

sudo apt-get update

sudo apt-get install binutils gcc-avr avr-libc uisp avrdude

git clone https://github.com/carl1961/New-GM328A 

cd  ~/New-GM328A/mega328_color_kit/mega328_color_kit

make changes to code  the type

make   

I then made a working folder on my computer to copy 

\\wsl.localhost\Ubuntu-22.04\home\carl\New-GM328A\mega328_color_kit\mega328_color_kit

mega328_color_kit.eep
mega328_color_kit.hex 

Point AVRDUDESS to the files  check everything then press Program!

![AVRDUDESS 2 16 (25)_GM328A](https://github.com/carl1961/New-GM328A/assets/3056821/fef00efd-07e0-4d68-a77d-5ec6f86d7cf5)


![WIN_20240213_00_17_32_Pro](https://github.com/carl1961/New-GM328A/assets/3056821/3798caa2-a67c-4b79-a4a5-549109be0a04)

Pictures of what I did here
https://www.eevblog.com/forum/testgear/lastest-gm328a/msg5327048/#msg5327048


I will update with pictures as I get time......
