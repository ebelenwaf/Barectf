# **Welcome to the Barectf**

Notes:

This repo contains files for Linux File system implementation and also will contain the implementation from TI TM4C Micro-controller.

Install barectf using the instructions on https://github.com/efficios/barectf.

The yaml file contains the configuration to generate the barectf.c and barectf.h used to implement the trace function. Configure the config.yaml file based on the specification assigned. I attached a working config.yaml file. To compile the yaml file enter the code,

    barectf config.yaml

To compile the sample program, run use the command:

    gcc sample.c -o sample.out -I. barectf-platform-linux-fs.c

This command produces an output file sample.out which can be executed

    ./sample.out

