/*
Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.
*/

#include<stdio.h>
#include<string.h>

main(){
	
	char Remail[100];
	char Rpassword[100];
	char email[100];
	char password[100];
	
	
	printf("============================= Register hear =============================\n");
	printf("Enter your Email :- ");
	gets(Remail);
	printf("Enter your password :- ");
	gets(Rpassword);
	printf("\n============================= Register succesfull =============================\n\n");
	system("cls");
	printf("============================= Login hear =============================\n");
	printf("Enter your Email :- ");
	gets(email);
	printf("Enter your password :- ");
	gets(password);
	
	if(strcmp(Remail,email)==0){
		if(strcmp(Rpassword,password)==0){
			printf("Login successfull..");	 
		}else{
			printf("wrong password..");
		}
		
	}else{
		printf("Invalide login..");
	}
		
	
}




