# System Args Logger

A small program to log system arguments that are recieved by a software and redirect it to the original software.

## Why?

I got really curious about how *Mi Unlocker tool* works, so I made this program to act as an intermmediate between the *Mi Unlocker tool* and the actual fastboot executable.


## Usage
Compile the C program using gcc or any IDE compilers.
Replace the executable you want to log with this program. And give the renamed file name inside the program at:
``` string str ="fastboot1.exe"; ```
This will log all the commands that are passed to the program and also redirect it to the program.

## License
Licensed under MIT License. Please create better versions if possible :)
