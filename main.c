#include <stdio.h>
int main(int argc, char* argv[]) {
	if(argc != 2) {
		printf("usage: %s colors", argv[0]);
	}
	else {
		FILE* file = fopen("/sys/devices/platform/clevo_xsm_wmi/kb_color", "w");
		if(file == NULL) {
			printf("Couldn't open file");
		}
		else {
			fprintf(file, "%s", argv[1]);
			fclose(file);
		}
	}
}
