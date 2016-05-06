## **Barectf Implementation on Linux File System and TI-TM4C Microcontroller**

This repo contains files for a basic implementation of barectf for Linux File system and will also contain the barectf implementation for the TI TM4C Micro-controller. 

Install barectf using the instructions on https://github.com/efficios/barectf.

The yaml file contains the configuration to generate the barectf.c and barectf.h used to implement the trace function.To configure the config.yaml file based on the specification assigned, I attached a working config.yaml file. To compile the yaml file enter the command,

    barectf config.yaml

Before compiling the sample program, make sure to change the directory file path in the barectf_platform_linux_fs_init() function from "/Users/ebelechukwu/Documents/test" to whichever file path you desire. To compile the sample program, run use the command:

    gcc sample.c -o sample.out -I. barectf-platform-linux-fs.c

This command produces an output file sample.out which can be executed

    ./sample.out
    
The trace file is stored as the string name stream in the directory specified in barectf-platform-linux-fs.c

