//============================================================================
// Name        : erlvpn.cpp
// Author      : William Guss
// Version     :
// Copyright   : 
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <rfb/rfbclient.h>


int main(void) {
	puts("ERLVNC v1");
	rfbClient* cl;
	cl = rfbGetClient(8,3,4);

	return EXIT_SUCCESS;
}

