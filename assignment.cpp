// 4,5 1 ota mea
#include<stdio.h>
int main()
{
	int w;
	printf("enter which program you want to run. \n 1.sum of 2 numbers. \n2.simple intreset. \n3.check + or -. \n4.odd or even. \n5.largest number(3). \n6 number and sun. \n7.sun of serise. \n8.factorial, \n9 electric bill. \n 10 reverse. \n 11 faconabic serise. \n12 count degit sum in number. \n13. greatest and disivle by 7. \n14 hcf and lcm of two number . \n15 prime number of two number  ");
	scanf("%d",&w);
	switch (w)
	{
		case 1:
			{
				int a,b;
				printf("enter two numbers");
				scanf("%d%d",&a,&b);
				printf("sum is %d",a+b);
				break;
				}
				case 2:
					{
						float r,t,p;
						printf("enter time rate and amount");
						scanf("%f%f%f",&r,&t,&p);
						printf("si is %f",(r*t*p)/1000);
						break;
						}
						case 3:
							{
								int a;
								printf("enter the number");
								scanf("%d",&a);
								if (a>0)
								{
									printf("positive");
									}
									else if (a<0)
									{
										printf("negative");
										}
										else
										{
											printf("it is 0");
											}
											break;
								}
								case 4:
									{
										int N;
	printf("Enter any number = ");
	scanf("%d",&N);
	if (N%2==0){
		printf("The number is even number.");
	}else {
		printf("The number is odd number.");
	}
	break;
										}
										case 5:
											{
												int A,B,C;
	printf("Enter any three numbers = ");
	scanf("%d%d%d",&A,&B,&C);
	if(A>B&&A>C){
		printf("%d is the largest number",A);
	}else if(B>C){
		printf("%d is the largest number",B);
	}else{
		printf("%d is the largest number",C);
	}
	break;
												}
												case 6:
													{
														int a,v=0,i;
														printf("enter how many numbers");
														scanf("%d",&a);
														int o[a];
														printf("\n enter numbers");
														for (i=0;i<a;i++)
														{
															scanf("%d",&o[i]);
															}
															for (i=0;i<a;i++)
															{
																v=v+o[i];
																}
																printf("sum is %d",v);
																break;
														}
														case 7:
															{
																int N,A=0,i;
	printf("Enter any number = ");
	scanf("%d",&N);
	for(i=1;i<=N;i=i+1){
		A=A+i;
	}
	printf("The sum of the series is %d",A);
	break;
																}
																case 8:
																	{
																		int a,j,i;
																		printf("ente the numer");
																		scanf("%d",&a);
																		for (i=1;i<a;i++)
																		{
																			j=i*(i+1);
																			
																			}
																			printf("factorial is %d",j);
																			break;
																		}
																		case 9:
																			{
																				int a,c;
																				printf("enter your elecrtic unit");
																				scanf("%d",&a);
																				if (a<=20)
																				{
																					c=a*8;
																					}
																					else if (a>=20 && a<=100)
																					{
																						c=20*8+(a-20)*10;
																						}
																						else 
																						{
																							c=20*8+80*10+(a-100)*12;
																							}
																							printf("amount if %d",c);
																	
																				break;
																				}
																				case 10:
																					{
																						int N,rem,ans=0;
	printf("Enter any number = ");
	scanf("%d",&N);
	while(N!=0){
		rem=N%10;
		ans=ans*10+rem;
		N=N/10;
	}
	printf("The reverse digit is = %d",ans);
	break;
																						}
																						case 11:
																							{
																								int N,A,B,C,i;
	printf("Enter any number = ");
	scanf("%d",&N);
	A=0;
	B=1;
	printf("%d %d",A,B);
	for(i=1;i<=N;i=i+1){
		C=A+B;
		A=B;
		B=C;
		printf(" %d ",C);
	}
	break;
																								}
																								case 12:
																									{
																							          int N,ans=0,rem;
	printf("Enter any number = ");
	scanf("%d",&N);
	while(N!=0){
		rem=N%10;
	    ans=rem+ans;
		N=N/10;
	}
	printf("The sum of the digits is %d",ans);
	break;
																										}
																										case 13:
																											{
																												int a,b ;
																												printf("enter two numbers");
																												scanf("%d%d",&a,&b);
																												if (a>b)
																												{
																													printf("greatest is a");
																												
																													}
																													else
																													{
																														printf("greatest is b");
																														}
																															if (a%7==0)
																													{
																														printf("a is divisible by 7");
																														}
																														else if (b%7==0)
																														{
																															printf("b is divisible by 7");
																															}
																															else
																															{
																																printf("both are undivisible");
																																}
																																break;
																												}
																												case 14:
																												 {
																													int x,y,a,b,l;
																													printf("enyter first number =");
																													scanf("%d",&x);
																													printf("enter second number =");
																													scanf("%d",&y);
																													a=x;
																													b=y;
																													while (x!=y)
																													{
																														if(x>y){
																															x=x-y;
																														}else{
																															y=y-x;
																														}
																													}
																													l=(a*b)/x;
																													printf("h.c.f = %d\n",x);
																													printf("l.c.m is %d",l);
																												 	 }
																													  case 15:
																												{
                                                                                                                      int num,i,count=0;
                                                                                                                        printf("Enter a number to check whether it is prime or not\n");
                                                                                                                            scanf("%d",&num);
                                                                                                                            for(i=1;i<=num;i++)
                                                                                                                            {
                                                                                                                              if(num%i==0)
                                                                                                                              {
                                                                                                                             count++;
                                                                                                                                   }
                                                                                                                                  }
                                                                                                                               if(count==2)
                                                                                                                                  {
                                                                                                                  printf("The given number %d is Prime Number\n",num);
                                                                                                                              }
                                                                                                                   else
                                                                                                                 {
                                                                                                                   printf("The given number %d is not Prime Number\n because The number is divisible by\n",num);
                                                                                                                   
                                                                                                                  }
    }
  }
}
																										
																																			
																												
																												 													 														

