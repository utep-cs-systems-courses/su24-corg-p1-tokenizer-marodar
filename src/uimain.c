#include <stdio.h>

void print_prompt(){
     printf("> ");
}

int ui(){
    char input[256];

    while(1){
	print_prompt();
	if(fgets(input, sizeof(input), stdin) == NULL){
		break;
	}
	printf("You entered: %s", input);
    }
    return 0;
}

int main(){
    return ui();
}
