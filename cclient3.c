#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

int main(){
	int clientSocket;
	char buffer[1024];
	struct sockaddr_in serverAddr;
	
	int Assalamualaikum;

	socklen_t addr_size;

	clientSocket = socket(PF_INET, SOCK_STREAM, 0);

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(7891);
	serverAddr.sin_addr.s_addr = inet_addr("192.168.1.47");
	memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

	addr_size = sizeof serverAddr;
	connect(clientSocket, (struct sockaddr *) &serverAddr, 
addr_size);

	recv(clientSocket, buffer, 1024, 0);
	
	printf("Please enter your message:");
	scanf ("%d");
	if(Assalamualaikum) {
		printf("Waalaikumussalam.\n");

	} else {
 
		printf("I am muslim.\n");
	}
	return 0;
}


