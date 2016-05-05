#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include "barectf.h"
#include <sys/time.h>

#include "barectf-platform-linux-fs.h"




int main(int argc, char const *argv[])
{

	struct barectf_platform_linux_fs_ctx *ctx_return = barectf_platform_linux_fs_init(10, "/Users/ebelechukwu/Documents/test", 0, 0, 0);


	for(int i=0; i < 5; i++){
	printf("Testing the functionality of the program...");

	barectf_default_trace_my_event(ctx_return, i);

}

	

	barectf_platform_linux_fs_fini(ctx_return);
	
	/* code */
	return 0;
}