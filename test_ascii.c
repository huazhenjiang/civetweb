#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//const char *str="3c68746d6c3ea3c686561643ea3c7469746c653e43697665747765623a20497420576f726b73213c2f7469746c653ea3c2f686561643ea3c626f64793ea3c646976207374796c653d22666c6f61743a72696768743b2077696474683a313030253b20746578742d616c69676e3a63656e7465723b223ea3c2f6469763ea3c646976207374796c653d22666c6f61743a6c6566743b206865696768743a3530253b206d617267696e2d626f74746f6d3a2d32303070783b223e3c2f6469763ea3c646976207374796c653d22636c6561723a626f74683b206865696768743a34303070783b2077696474683a34303070783b206d617267696e3a206175746f3b20706f736974696f6e3a72656c61746976653b223ea3c696d67207372633d2263697665747765625f36347836342e706e672220616c743d226c6f676f222f3ea3c703ea3c62207374796c653d22666f6e742d73697a653a6c6172676572223e3c61207374796c653d22746578742d6465636f726174696f6e3a6e6f6e652220687265663d2268747470733a2f2f736f75726365666f7267652e6e65742f70726f6a656374732f63697665747765622f223e43697665747765623c2f613e3c2f623e3c62723ea3c693e596f757220776562207365727665723c2f693ea3c756c3ea3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f63697665747765622f626c6f622f6d61737465722f646f63732f557365724d616e75616c2e6d64223e55736572204d616e75616c3c2f613e3c2f6c693ea3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f63697665747765622f626c6f622f6d61737465722f52454c454153455f4e4f5445532e6d64223e52656c65617365204e6f7465733c2f613e3c2f6c693ea3c6c693e3c6120687265663d2268747470733a2f2f736f75726365666f7267652e6e65742f70726f6a656374732f63697665747765622f223e446f776e6c6f6164733c2f613e3c2f6c693ea3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f6369766574776562223e4769744875623c2f613e3c2f6c693ea3c2f756c3ea3c2f703ea3c2f6469763ea3c2f626f64793ea3c2f68746d6c3e";
const char *str="3c68746d6c3e0a3c686561643e0a3c7469746c653e4875617a68656e3a2054657374696e6720506167653c2f7469746c653e0a3c2f686561643e0a3c626f64793e0a0a3c646976207374796c653d22666c6f61743a72696768743b2077696474683a313030253b20746578742d616c69676e3a63656e7465723b223e0a3c2f6469763e0a3c646976207374796c653d22666c6f61743a6c6566743b206865696768743a3530253b206d617267696e2d626f74746f6d3a2d32303070783b223e3c2f6469763e0a3c646976207374796c653d22636c6561723a626f74683b206865696768743a34303070783b2077696474683a34303070783b206d617267696e3a206175746f3b20706f736974696f6e3a72656c61746976653b223e0a3c696d67207372633d2263697665747765625f36347836342e706e672220616c743d226c6f676f222f3e0a3c703e0a0a0a3c62207374796c653d22666f6e742d73697a653a6c6172676572223e3c61207374796c653d22746578742d6465636f726174696f6e3a6e6f6e652220687265663d2268747470733a2f2f736f75726365666f7267652e6e65742f70726f6a656374732f63697665747765622f223e4875612074657374696e673c2f613e3c2f623e3c62723e0a3c693e596f757220776562207365727665723c2f693e0a3c756c3e0a0a0a3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f63697665747765622f626c6f622f6d61737465722f646f63732f557365724d616e75616c2e6d64223e55736572204d616e75616c3c2f613e3c2f6c693e0a3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f63697665747765622f626c6f622f6d61737465722f52454c454153455f4e4f5445532e6d64223e52656c65617365204e6f7465733c2f613e3c2f6c693e0a3c6c693e3c6120687265663d2268747470733a2f2f736f75726365666f7267652e6e65742f70726f6a656374732f63697665747765622f223e446f776e6c6f6164733c2f613e3c2f6c693e0a3c6c693e3c6120687265663d2268747470733a2f2f6769746875622e636f6d2f63697665747765622f6369766574776562223e4769744875623c2f613e3c2f6c693e0a3c2f756c3e0a3c2f703e0a0a0a3c2f6469763e0a0a0a3c2f626f64793e0a3c2f68746d6c3e0a";
const char *ascii="0123456789abcdef";
const char *traget="Focus/Zoom";
void main(){
	
	char ch=0,ch2=0;
	unsigned long i=0,length,j;
	unsigned long index=0,count=0;
	unsigned char ten=0, one=0, sum=0;
	FILE *fp_in, *fp_out, *fp_trans;


//1st	
	//fp_in=fopen("src.html","r");
	//index
	//fp_in=fopen("index.html","r");
	//css
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\css\\bootstrap.min.css","r");
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\css\\bootstrap-slider.min.css","r");
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\css\\jquery.bootstrap-touchspin.css","r");
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\css\\switch.css","r");
	//js
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\js\\bootstrap.min.js","r");
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\js\\bootstrap-slider.min.js","r");	
	//fp_in=fopen("F:\\devpp_project\\test_ascii\\js\\jquery.bootstrap-touchspin.js","r");	
	fp_in=fopen("F:\\devpp_project\\test_ascii\\js\\jquery.min.js","r");
	
	//out		
	fp_out=fopen("dest.txt","w");
	
	while( (ch=fgetc(fp_in)) != EOF){
/*
		if((count%2048)==0){
			fprintf(fp_out,"\"",ch); //at first
			if(count!=0){
				index=index+1;
			}	
			if(index > 0){
				fprintf(fp_out,",\n\"",ch);
			}
		}
*/		
		fprintf(fp_out,"%02x",ch);
		//count = count+1;
				
	}
	//fseek( fp_out, 0, SEEK_CUR);
	//fprintf(fp_out,"\"",ch); //at end
	//fseek( fp_out, 0, SEEK_END);
	fclose(fp_in);
	fclose(fp_out);
	
//2nd	
	fp_in=fopen("dest.txt","r");
	fp_out=fopen("dest_2nd.txt","w");

	while( (ch2=fgetc(fp_in)) != EOF){


		if((count%2048)==0){
			//fprintf(fp_out,"\""); //at first
			//printf("\"");
			if(count == 0){
				fprintf(fp_out,"\n\""); //at first
				//printf("\r\n1");
			}
			else{
				//printf("\r\n2");
				fprintf(fp_out,"\",\n\"");
				//fprintf(fp_out,"\",\n");
			}
/*			
			printf("\r\ncount:%d",count);
			printf("\r\nindex:%d",index);
			if(count!=0){
				index=index+1;
				printf("\r\n22count:%d",count);
				printf("\r\n22index:%d",index);				
			}	
			if(index > 0){
				fprintf(fp_out,",\n\"");
				//printf(",\n\"");
			}
			else if(index==0){
				fprintf(fp_out,"\""); //at first
			}
*/			
		}
		//else{
		//	fprintf(fp_out,"%c",ch2);
		//}		
		fprintf(fp_out,"%c",ch2);
		//printf("%c",ch2);
		count = count+1;
				
	}
	//printf("\r\nindex:%d",index);
	//fseek( fp_out, 0, SEEK_CUR);
	//fprintf(fp_out,"\"",ch); //at end
	//fseek( fp_out, 0, SEEK_END);
	fclose(fp_in);
	fclose(fp_out);


	
	//fp_out=fopen("dest.txt","r");
	
	//while( (ch=fgetc(fp_out)) != EOF){
	//	fprintf(fp_out,"%x",ch);
	//}		
	//fclose(fp_out);
	
	for(j=0;j<strlen(ascii);j++)
		printf("\r\n%c: %x",ascii[j],ascii[j]);
	
	printf("\r\n");
	for(j=0;j<strlen(traget);j++)
		printf("%02x",traget[j]);
			
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

//verify the recover function				
	i=0;
	fp_trans=fopen("trans.txt","w");
	printf("str_length:%8d\n",length);
	if(length > 0){
		while(i<length){
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
			
			fprintf(fp_trans,"%c",sum);

			i=i+2;
		}
	 
	}
	printf("str_i:%8d\n",i);
	fclose(fp_trans);	
		
	system("pause");
	
}	
