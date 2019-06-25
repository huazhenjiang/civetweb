#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *str="3c68746d6c3ea3c686561643ea3c7469746c653e43697665747765623a20497420576f726b73213c2f7469746c653ea3c2f686561643ea3c626f64793ea3c646976207374796c653d22666c6f61743a72696768743b2077696474683a313030253b20746578742d616c69676e3a63656e7465723b223ea3c2f6469763ea3c646976207374796c653d22666c6f61743a6c6566743b206865696768743a3530253b206d617267696e2d626f74746f6d3a2d32303070783b223e3c2f6469763ea3c646976207374796c653d22636c6561723a626f74683b206865696768743a34303070783b2077696474683a34303070783b206d617267696e3a206175746f3b20706f736974696f6e3a72656c61746976653b223ea3c696d67207372633d2263697665747765625f36347836342e706e672220616c743d226c6f676f222f3ea3c703ea3c62207374796c653d22666f6e742d73697a653a6c6172676572223e3c61207374796c653d22746578742d6465636f726174696f6e3a6e6f6e652220687265663d2268747470733a2f2f736f75726365666f7267652e6e65742f70726f6a656374732f63697665747765622f223e43697665747765623c2f613e3c2f623e3c62723ea3c693e596f757220776562207365727665723c2f693ea3c756c3ea3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f63697665747765622f626c6f622f6d61737465722f646f63732f557365724d616e75616c2e6d64223e55736572204d616e75616c3c2f613e3c2f6c693ea3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f63697665747765622f626c6f622f6d61737465722f52454c454153455f4e4f5445532e6d64223e52656c65617365204e6f7465733c2f613e3c2f6c693ea3c6c693e3c6120687265663d2268747470733a2f2f736f75726365666f7267652e6e65742f70726f6a656374732f63697665747765622f223e446f776e6c6f6164733c2f613e3c2f6c693ea3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f6369766574776562223e4769744875623c2f613e3c2f6c693ea3c2f756c3ea3c2f703ea3c2f6469763ea3c2f626f64793ea3c2f68746d6c3e";

void main(){
	
	char ch;
	unsigned long i=0,length;
	unsigned char ten=0, one=0, sum=0;
	FILE *fp_in, *fp_out, *fp_trans;
	fp_in=fopen("src.txt","r");
	fp_out=fopen("dest.txt","w");
	
	while( (ch=fgetc(fp_in)) != EOF){
		fprintf(fp_out,"%x",ch);
	}
	fclose(fp_in);
	fclose(fp_out);
	
	//fp_out=fopen("dest.txt","r");
	fp_trans=fopen("trans.txt","w");
	//while( (ch=fgetc(fp_out)) != EOF){
	//	fprintf(fp_out,"%x",ch);
	//}		
	//fclose(fp_out);
	
	length = strlen(str);
	printf("\r\n length of str:%8d\n", length);
/*	
			//ten = str[i] - '0';
			//one = str[i+1] - '0';
			//sum = ten*16 + one;
			printf("\r\n%c , %c",str[i],str[i+1]);
			if((str[i] >= 0x30)&&(str[i] <= 0x39)){
				ten =str[i]-'0';
			}
			else{
				ten =str[i]-'a'+10;
			}

			if((str[i+1] >= 0x30)&&(str[i+1] <= 0x39)){
				one =str[i+1]-'0';
			}
			else{
				one =str[i+1]-'a'+10;
			}
			sum = ten*16 + one;				
			printf("\r\n%x , %x, %x",ten,one, sum);
			printf("\r\n%c , %c, %c",ten,one, sum);
*/				
	if(length > 0){
		while(i<=length){
			if((str[i] >= 0x30)&&(str[i] <= 0x39)){
				ten =str[i]-'0';
			}
			else{
				ten =str[i]-'a'+10;
			}

			if((str[i+1] >= 0x30)&&(str[i+1] <= 0x39)){
				one =str[i+1]-'0';
			}
			else{
				one =str[i+1]-'a'+10;
			}			
			//ten = str[i] - '0';
			//one = str[i+1] - '0';
			sum = ten*16 + one;
			
			fprintf(fp_trans,"%c",sum);
			//printf("\r\n%c",sum);
			i=i+2;
		}
		 
	}
	
	fclose(fp_trans);	
		
	system("pause");
	
}	
