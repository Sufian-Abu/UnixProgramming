					#include <stdio.h>
					#include <ctype.h>

		
				int main(int argc , char *argv[])
				{
					
					if( argc > 3 ) {

				                // Print the argument which is given as input
                                                printf("Supplied First Argument is %s\n", argv[0]);
						
						printf("Supplied Argument is %s\n", argv[1]);
						printf("Supplied String is %s\n", argv[2]);
				                  
				               // Checking the options
				 
						if (strcmp(argv[1] , "-i") ==0){
							printf("Case Sensitive Disabled.\n");  
						}else if (strcmp(argv[1] , "-n") ==0){
							printf("Line Numbers requested.\n");  
						}else{
							printf("Usage:Wrong Options.\n");
						}
						char text[200];
						FILE *file;
						int counter= 3; // Argument counter
						int repeat=0;
						if (strstr(argv[2] , "-")){
							counter=4; // counter became 4 because multiple options
							repeat=1;
							printf("Multiple Options are given \n");			
						}
						do{
							printf("Supplied File Name Is %s\n", argv[counter]);
							file=fopen(argv[counter],"r"); // file is opeing here
							if(file==NULL)
							{
								printf("File could not be opened\n");
							}else 
							{
							int lcount=1; // counter for counting line number os the text file
		                                      
								while(fgets(text , 500, file)!=NULL){
						

					 match(lcount , argv[counter], text, argv[2] , argv[1]);
		                            // passing varibale for matching 
		                             
					
								lcount++;
								}
								fclose(file);
							}
							counter++;	
						}while(counter< argc);
		

					}else if( argc < 3 ) {
						printf("Other arguments expected.\n");
					}else {
						printf("Unknown Argument Exceptions.\n");
					}
					return 0;
				}



			   char* lowercase (char array[]){
					char *c;
					for (c= array; *c!='\0'; ++c){
						*c=tolower(*c); // Built in fucntion to convert lower case
					}
					return array;
				}


					void match(int line,char file[], char main[],char sub[], char arg1[])
					       {
		                                // checking options i
						if (strcmp(arg1 , "-i") ==0){
							main= lowercase(main);
							sub= lowercase(sub);	
						}
		                                
						if (strstr(main , sub)){
							printf("File %s:",file);
							if (strcmp(arg1 , "-n") ==0){
								printf("(%i)",line);
							}else if (strcmp(arg1 , "-in") ==0 || strcmp(arg1 , "-ni") ==0){
								printf("(%i)",line);
							}
							printf("%s\n",main);
				
						}
				

						       }
	





