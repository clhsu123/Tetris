#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int array[20][25], i, j, k,position1, position2, position3, position4, positiona, positionb, positionc, positiond, count, condition, choice, input;

char move;
void initialization(void);
void edge(void);
void graph(void);
void cube1(void);
void cube2(void);
void cube3(void);
void cube4(void);
void cube5(void);
void left(void);
void right(void);
void down(void);
void rotate(void);
void test(void);
void test_1(void);
void test_2(void);
void test_3(void);
void test_5(void);
enum status{phase1, phase2, phase3, phase4};
enum status status;
enum loop{yes, no};
enum loop loop;
void cube_generator(void);


int main()
{
	count=clock()/CLK_TCK;
	srand(time(NULL));
	initialization();
	edge();
    cube_generator();
  	return 0;
}

void initialization(void){
   for(j=0;j<25;j++)
{
	for(i=0;i<20;i++)
	{
		array[i][j]=0;
	}
}
}
void edge(void){
	for(i=0;i<20;i++)
	{
		array[i][24]=3;
	}
    for(i=0;i<20;i+=19)
{
	for(j=5;j<25;j++)
	{
		array[i][j]=2;
	}
}
}
void graph(void)
{
	for(j=5;j<25;j++)
	{
		for(i=0;i<20;i++)
		{
			if(array[i][j]==0)
			printf(" ");
			else if(array[i][j]==1)
			printf("*");
			else if(array[i][j]==2)
			printf("|");
			else if(array[i][j]==3)
			printf("-"); 
		}
		printf("\n");
	}
}
void cube1(void)
{   loop=yes;
    status=phase1;
    choice=1;
    condition=0;
	array[8][3]=array[9][3]=array[10][3]=array[11][3]=1;
	position1=8;
	positiona=3;
	position2=9;
	positionb=3;
	position3=10;
	positionc=3;
	position4=11;
	positiond=3;
	for(i=0;loop==yes;i++)
    {if (kbhit()) {
        input=getch();
if (input == 'A')
{if(status==phase1)
{if(array[position1-1][positiona]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase2||status==phase4)
{
     if(array[position1-1][positiona]==0&&array[position2-1][positionb]==0&&array[position3-1][positionc]==0&&array[position4-1][positiond]==0)
     {
left();
system("cls");
graph();
}
}
else if(status==phase3)
{
     if(array[position4-1][positiond]==0)
     {
left();
system("cls");
graph();
}
}                                                                                                                                                                                      
}
else if(input=='D')
{
if(status==phase1)
{if(array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase2||status==phase4)
{
     if(array[position1+1][positiona]==0&&array[position2+1][positionb]==0&&array[position3+1][positionc]==0&&array[position4+1][positiond]==0)
     {
right();
system("cls");
graph();
}
}
else if(status==phase3)
{
     if(array[position1+1][positiona]==0)
     {
right();
system("cls");
graph();
}
}           
}
else if (input == 'W')
{
rotate();
system("cls");
graph();
}
else if (input== 'S')
{
down();
system("cls");
graph();
}
}

	if(count!=clock()/CLK_TCK)
	{
		down();
		system("cls");
	    graph();
		count=clock()/CLK_TCK;
	}
	test_1();
	}
}
void cube2(void)
{   loop=yes;
    status=phase1;
    choice=2;
    condition=0;
	array[8][3]=array[9][3]=array[10][3]=array[9][2]=1;
	position1=8;
	positiona=3;
	position2=9;
	positionb=3;
	position3=10;
	positionc=3;
	position4=9;
	positiond=2;
	for(i=0;loop==yes;i++)
    {
    	if (kbhit()) {
                     input=getch();
if (input== 'A')
{if(status==phase1)
{if(array[position1-1][positiona]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase2)
{if(array[position1-1][positiona]==0&&array[position2-1][positionb]==0&&array[position3-1][positionc]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase3)
{if(array[position3-1][positionc]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase4)
{if(array[position1-1][positiona]==0&&array[position3-1][positionc]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}                                                                                                                                                                                                                                                                                              
}
else if(input=='D')
{
if(status==phase1)
{if(array[position3+1][positionc]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase2)
{if(array[position1+1][positiona]==0&&array[position4+1][positiond]==0&&array[position3+1][positionc]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase3)
{if(array[position1+1][positiona]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase4)
{if(array[position3+1][positionc]==0&&array[position2+1][positionb]==0&&array[position3+1][positionc]==0)
{
right();
system("cls");
graph();
}
}        
}
else if (input== 'W')
{
rotate();
system("cls");
graph();
}
else if (input== 'S')
{
down();
system("cls");
graph();
}
}
    if(count!=clock()/CLK_TCK)
	{
		down();
		system("cls");
		graph();
		count=clock()/CLK_TCK;
	}
	test_2();
	}
	
}
void cube3(void)
{   loop=yes;
    condition=0;
    choice=3;
	array[8][3]=array[8][2]=array[9][3]=array[10][3]=1;
	position1=8;
	positiona=3;
	position2=8;
	positionb=2;
	position3=9;
	positionc=3;
	position4=10;
	positiond=3;
	for(i=0;loop==yes;i++)

	{
		if (kbhit()) {
                     input=getch();
if (input== 'A')
{if(status==phase1)
{if(array[position1-1][positiona]==0&&array[position2-1][positionb]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase2)
{if(array[position1-1][positiona]==0&&array[position3-1][positionc]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
} 
else if(status==phase3)
{if(array[position2-1][positionb]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
} 
else if(status==phase4)
{if(array[position2-1][positionb]==0&&array[position3-1][positionc]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}                                                                                                                                                                                                                                                                                         
}
else if(input=='D')
{
if(status==phase1)
{if(array[position4+1][positiond]==0&&array[position2+1][positionb]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase2)
{if(array[position2+1][positionb]==0&&array[position3+1][positionc]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
} 
else if(status==phase3)
{if(array[position2+1][positionb]==0&&array[position1+1][positiona]==0)
{
right();
system("cls");
graph();
}
} 
else if(status==phase4)
{if(array[position1+1][positiona]==0&&array[position3+1][positionc]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}        
}
else if (input== 'W')
{
rotate();
system("cls");
graph();
}
else if (input== 'S')
{
down();
system("cls");
graph();
}
}
	if(count!=clock()/CLK_TCK)
	{
		down();
		system("cls");
		graph();
		count=clock()/CLK_TCK;
	}
	test_3();
	}
	
}


void cube4(void)
{   
	array[8][3]=array[8][2]=array[9][3]=array[9][2]=1;
	position1=8;
	positiona=3;
	position2=8;
	positionb=2;
	position3=9;
	positionc=3;
	position4=9;
	positiond=2;
	for(i=0;array[position1][positiona+1]==0&&array[position3][positionc+1]==0;i++)
	{
		if (kbhit()) {
                     input=getch();
if (input== 'A')
{if(array[position1-1][positiona]==0&&array[position2-1][positionb]==0)
{
left();
system("cls");
graph();
}
}
else if(input=='D')
{if(array[position3+1][positionc]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}			
}
else if (input== 'S')
{
down();
system("cls");
graph();
}
}
	if(count!=clock()/CLK_TCK)
	{
		down();
		system("cls");
		graph();
		count=clock()/CLK_TCK;
	}

	}

}
void cube5(void)
{   loop=yes;
    condition=0;
    choice=5;
	array[8][2]=array[9][2]=array[9][3]=array[10][3]=1;
	position1=8;
	positiona=2;
	position2=9;
	positionb=2;
	position3=9;
	positionc=3;
	position4=10;
	positiond=3;
	for(i=0;loop==yes;i++)
	{
	if (kbhit()) {
                 input=getch();
if (input== 'A')
{if(status==phase1)
{if(array[position1-1][positiona]==0&&array[position3-1][positionc]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase2)
{if(array[position1-1][positiona]==0&&array[position3-1][positionc]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase3)
{if(array[position2-1][positionb]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}
else if(status==phase4)
{if(array[position1-1][positiona]==0&&array[position2-1][positionb]==0&&array[position4-1][positiond]==0)
{
left();
system("cls");
graph();
}
}                                                                                                                                                                                                                                                                                         
}
else if(input=='D')
{
if(status==phase1)
{if(array[position2+1][positionb]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase2)
{if(array[position1+1][positiona]==0&&array[position2+1][positionb]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase3)
{if(array[position1+1][positiona]==0&&array[position3+1][positionc]==0)
{
right();
system("cls");
graph();
}
}
else if(status==phase4)
{if(array[position1+1][positiona]==0&&array[position3+1][positionc]==0&&array[position4+1][positiond]==0)
{
right();
system("cls");
graph();
}
}        
}
else if (input== 'W')
{
rotate();
system("cls");
graph();
}
else if (input== 'S')
{
down();
system("cls");
graph();
}
}
	if(count!=clock()/CLK_TCK)
	{
		down();
		system("cls");
		graph();	
		count=clock()/CLK_TCK;	
	}
	test_5();	
	}

	

}
void cube_generator(void)

{
	int a;
	for(i=0;;i++)
	{
	a=rand()%5+1;
	switch(a){
		case 1:
			{cube1();
			test();
			break;
		}
		case 2:
			{
				cube2();
				test();
				break;
			}
			case 3:
				{
					cube3();
					test();
					break;
				}
				case 4:
					{
						cube4();
						test();
						break;
					}
					case 5:
						{
							cube5();
							test();
							break;
						}
			
	}
}
}
void left()
{   int w=1, x=1, y=1, z=1;
	array[position1-1][positiona]=array[position2-1][positionb]=array[position3-1][positionc]=array[position4-1][positiond]=1;
	if(array[position1+1][positiona]!=1)
	{
		w=0;
		
	}
	if(array[position2+1][positionb]!=1)
	{
		x=0;
		
	}
	if(array[position3+1][positionc]!=1)
	{
		y=0;
	
	}
	if(array[position4+1][positiond]!=1)
	{
		z=0;
	
	}
	array[position1][positiona]=w;
	array[position2][positionb]=x;
	array[position3][positionc]=y;
	array[position4][positiond]=z;
	position1--;
	position2--;
	position3--;
	position4--;
}
void right()
{   int w=1, x=1, y=1, z=1;
	array[position1+1][positiona]=array[position2+1][positionb]=array[position3+1][positionc]=array[position4+1][positiond]=1;
	if(array[position1-1][positiona]!=1)
	{
		w=0;	
	}
	if(array[position2-1][positionb]!=1)
	{
		x=0;	
	}
	if(array[position3-1][positionc]!=1)
	{
		y=0;	
	}
	if(array[position4-1][positiond]!=1)
	{
		z=0;	
	}
	array[position1][positiona]=w;
	array[position2][positionb]=x;
	array[position3][positionc]=y;
	array[position4][positiond]=z;
	position1++;
	position2++;
	position3++;
	position4++;
}
void down(void)
{
	int w=1, x=1, y=1, z=1;
	array[position1][positiona+1]=array[position2][positionb+1]=array[position3][positionc+1]=array[position4][positiond+1]=1;
    if(array[position1][positiona-1]==0)
	{
		w=0;	
	}
	if(array[position2][positionb-1]==0)
	{   
	    x=0;		
	}
	if(array[position3][positionc-1]==0)
	{  
	    y=0;		
	}
	if(array[position4][positiond-1]==0)
	{  
	    z=0;	
	} 
	array[position1][positiona]=w;
	array[position2][positionb]=x;
	array[position3][positionc]=y;
	array[position4][positiond]=z;
	positiona++;
    positionb++;
	positionc++;
	positiond++;
}
void rotate(void)
{
	switch(choice){
		case 1:
			{
				if(condition%4==0)
				{
			if(array[position1][positiona-1]==0&&array[position2][positionb-1]==0&&array[position2][positionb-2]==0&&array[position4][positiond+1]==0)
			{   array[position3][positionc-2]=array[position3][positionc-1]=array[position3][positionc+1]=1;
				array[position1][positiona]=array[position2][positionb]=array[position4][positiond]=0;
				position1+=2;
				positiona-=2;
				position2++;
				positionb--;
				position4--;
				positiond++;
				condition++;
				status=phase2;
				}
			}
			else if(condition%4==1)
			{
				if(array[position1+1][positiona]==0&&array[position2+1][positionb]==0&&array[position2+2][positionb]==0)
				{
				array[position3-1][positionc]=array[position3+1][positionc]=array[position3+2][positionc]=1;
				array[position3][positionc-2]=array[position3][positionc-1]=array[position3][positionc+1]=0;
				position1+=2;
				positiona+=2;
				position2++;
				positionb++;
				position4--;
				positiond--;
				condition++;
                status=phase3;	
				}
			}
			else if(condition%4==2)
			{
				if(array[position1][positiona+1]==0&&array[position2][positionb+1]==0&&array[position2][positionb+2]==0)
				{
					array[position3][positionc-1]=array[position3][positionc+1]=array[position3][positionc+2]=1;
					array[position3-1][positionc]=array[position3+1][positionc]=array[position3+2][positionc]=0;
					position1-=2;
					positiona+=2;
					position2--;
					positionb++;
					position4++;
					positiond--;
					condition++;
					status=phase4;
				}
			}
			else if(condition%4==3)
			{
				if(array[position1-1][positiona]==0&&array[position2-1][positionb]==0&&array[position2-2][positionb]==0)
				{
					array[position3-2][positionc]=array[position3-1][positionc]=array[position3+1][positionc]=1;
					array[position3][positionc-1]=array[position3][positionc+1]=array[position3][positionc+2]=0;
					position1-=2;
					positiona-=2;
					position2--;
					positionb--;
					position4++;
					positiond++;
					condition++;
					status=phase1;
				}
			}
			break;
			}
			case 2:
				{
					if(condition%4==0)
					{if(array[position2][positionb+1]==0)
					{
						array[position2][positionb+1]=1;
						array[position2-1][positionb]=0;
						position1++;
						positiona--;
						position3--;
						positionc++;
						position4++;
						positiond++;
						condition++;
						status=phase2;
                    }
					}
					else if(condition%4==1)
					{if(array[position2-1][positionb]==0)
					{
						array[position2-1][positionb]=1;
						array[position2][positionb-1]=0;
						position1++;
						positiona++;
						position3--;
						positionc--;
						position4--;
						positiond++;
						condition++;
				        status=phase3;
                     }
					}
					else if(condition%4==2)
					{if(array[position2][positionb-1]==0)
					{
						array[position2][positionb-1]=1;
						array[position2+1][positionb]=0;
						position1--;
						positiona++;
						position3++;
						positionc--;
						position4--;
						positiond--;
						condition++;
                        status=phase4;
                        }
					}
					else if(condition%4==3)
					{if(array[position2+1][positionb]==0)
					{
						array[position2+1][positionb]=1;
						array[position2][positionb+1]=0;
						position1--;
						positiona--;
						position3++;
						positionc++;
						position4++;
						positiond--;
						condition++;
						status=phase1;
                    }
					}
					break;
				}
				case 3:
					{
						if(condition%4==0)
						{
							if(array[position3][positionc-1]==0&&array[position3+1][positionc-1]==0&&array[position3][positionc+1]==0)
							{
								array[position3][positionc-1]=array[position3+1][positionc-1]=array[position3][positionc+1]=1;
								array[position3-1][positionc]=array[position3-1][positionc-1]=array[position3+1][positionc]=0;
								position1++;
								positiona--;
								position2+=2;
								position4--;
								positiond++;
								condition++;
								status=phase2;
							}
						}
						else if(condition%4==1)
						{
							if(array[position3+1][positionc]==0&&array[position3+1][positionc+1]==0&&array[position3-1][positionc]==0)
							{
								array[position3+1][positionc]=array[position3+1][positionc+1]=array[position3-1][positionc]=1;
								array[position3][positionc-1]=array[position3+1][positionc-1]=array[position3][positionc+1]=0;
								position1++;
								positiona++;
								positionb+=2;
								position4--;
								positiond--;
								condition++;
								status=phase3;
							}
						}
						else if(condition%4==2)
						{
							if(array[position3][positionc-1]==0&&array[position3][positionc+1]==0&&array[position3-1][positionc+1]==0)
							{
								array[position3][positionc-1]=array[position3][positionc+1]=array[position3-1][positionc+1]=1;
								array[position3+1][positionc]=array[position3+1][positionc+1]=array[position3-1][positionc]=0;
								position1--;
								positiona++;
								position2-=2;
								position4++;
								positiond--;
								condition++;
								status=phase4;
							}
						}
						else if(condition%4==3)
						{
							if(array[position3-1][positionc]==0&&array[position3-1][positionc-1]==0&&array[position3+1][positionc]==0)
							{
								array[position3-1][positionc]=array[position3-1][positionc-1]=array[position3+1][positionc]=1;
								array[position3][positionc-1]=array[position3][positionc+1]=array[position3-1][positionc+1]=0;
								position1--;
								positiona--;
								positionb-=2;
								position4++;
								positiond++;
								condition++;
								status=phase1;
							}
						}
						break;
					}
					case 5:
						{
							if(condition%4==0)
							{
								if(array[position3+1][positionc-1]==0&&array[position3][positionc+1]==0)
								{
									array[position3+1][positionc-1]=array[position3][positionc+1]=1;
									array[position3][positionc-1]=array[position3-1][positionc-1]=0;
									position1+=2;
									position2++;
									positionb++;
									position4--;
									positiond++;
									condition++;
							        status=phase2;
                                    }
							}
							else if(condition%4==1)
							{
								if(array[position3-1][positionc]==0&&array[position3+1][positionc+1]==0)
								{
									array[position3+1][positionc+1]=array[position3-1][positionc]=1;
									array[position3+1][positionc]=array[position3+1][positionc-1]=0;
									positiona+=2;
									position2--;
									positionb++;
									position4--;
									positiond--;
									condition++;
								    status=phase3;
                                 }
							}
							else if(condition%4==2)
							{
								if(array[position3][positionc-1]==0&&array[position3-1][positionc+1]==0)
								{
									array[position3-1][positionc+1]=array[position3][positionc-1]=1;
									array[position3][positionc+1]=array[position3+1][positionc+1]=0;
									position1-=2;
									position2--;
									positionb--;
									position4++;
									positiond--;
									condition++;
								    status=phase4;
                                 }
							}
							else if(condition%4==3)
							{
								if(array[position3-1][positionc-1]==0&&array[position3+1][positionc]==0)
								{
								 array[position3-1][positionc-1]=array[position3+1][positionc]=1;
								 array[position3-1][positionc]=array[position3-1][positionc+1]=0;
								 positiona-=2;
								 position2++;
								 positionb--;
								 position4++;
								 positiond++;
								 condition++; 
							     status=phase1;
                                 }
						}
						break;
				}
}
	
}
void test_1(void)
{
     if(status==phase1||status==phase3)
     {
                       if(array[position1][positiona+1]!=0||array[position2][positionb+1]!=0||array[position3][positionc+1]!=0||array[position4][positiond+1]==1)
                       {
                                                                                                                                                                 loop=no;
                                                                                                                                                                 }
                                                                                                                                                                 }
                                                                                                                                                                 else if(status==phase2)
                                                                                                                                                                 {
                                                                                                                                                                      if(array[position4][positiond+1]!=0)
                                                                                                                                                                      {
                                                                                                                                                                                                          loop=no;
                                                                                                                                                                                                          }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          else if(status==phase4)
                                                                                                                                                                                                          {
                                                                                                                                                                                                               if(array[position1][positiona+1]!=0)
                                                                                                                                                                                                               {
                                                                                                                                                                                                                                                   loop=no;
                                                                                                                                                                                                                                                   }
                                                                                                                                                                                                                                                   }
                                                                                                                                                                                                                                                   }
void test_2(void)
{
     if(status==phase1)
     {
                       if(array[position1][positiona+1]!=0||array[position2][positionb+1]!=0||array[position3][positionc+1]!=0)
                       {
                                                                                                                               loop=no;
                                                                                                                               }
                                                                                                                               }
                                                                                                                               else if(status==phase2)
                                                                                                                               {
                                                                                                                                    if(array[position3][positionc+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                    {
                                                                                                                                                                                                          loop=no;
                                                                                                                                                                                                          }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          else if(status==phase3)
                                                                                                                                                                                                          {
                                                                                                                                                                                                               if(array[position1][positiona+1]!=0||array[position3][positionc+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                                                                                               {
                                                                                                                                                                                                                                                                                                                       loop=no;
                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                       else if(status==phase4)
                                                                                                                                                                                                                                                                                                                       {
                                                                                                                                                                                                                                                                                                                            if(array[position1][positiona+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                  loop=no;
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  }
void test_3(void)
{
     if(status==phase1)
     {
                       if(array[position1][positiona+1]!=0||array[position3][positionc+1]!=0||array[position4][positiond+1]!=0)
                       {
                                                                                                                               loop=no;
                                                                                                                               }
                                                                                                                               }
                                                                                                                               else if(status==phase2)
                                                                                                                               {
                                                                                                                                    if(array[position2][positionb+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                    {
                                                                                                                                                                                                          loop=no;
                                                                                                                                                                                                          }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          else if(status==phase3)
                                                                                                                                                                                                          {
                                                                                                                                                                                                               if(array[position2][positionb+1]!=0||array[position3][positionc+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                                                                                               {
                                                                                                                                                                                                                                                                                                                       loop=no;
                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                       else if(status==phase4)
                                                                                                                                                                                                                                                                                                                       {
                                                                                                                                                                                                                                                                                                                            if(array[position1][positiona+1]!=0||array[position2][positionb+1]!=0)
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                  loop=no;
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  }
void test_5(void)
{
     if(status==phase1)
     {
                       if(array[position1][positiona+1]!=0||array[position3][positionc+1]!=0||array[position4][positiond+1]!=0)
                       {
                                                                                                                               loop=no;
                                                                                                                               }
                                                                                                                               }
                                                                                                                               else if(status==phase2)
                                                                                                                               {
                                                                                                                                    if(array[position2][positionb+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                    {
                                                                                                                                                                                                          loop=no;
                                                                                                                                                                                                          }
                                                                                                                                                                                                          }
                                                                                                                                                                                                          else if(status==phase3)
                                                                                                                                                                                                          {
                                                                                                                                                                                                               if(array[position1][positiona+1]!=0||array[position2][positionb+1]!=0||array[position4][positiond+1]!=0)
                                                                                                                                                                                                               {
                                                                                                                                                                                                                                                                                                                       loop=no;
                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                       else if(status==phase4)
                                                                                                                                                                                                                                                                                                                       {
                                                                                                                                                                                                                                                                                                                            if(array[position1][positiona+1]!=0||array[position3][positionc+1]!=0)
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                                                                                  loop=no;
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  }                                                                                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
void test(void)/*同一排都有方塊則消掉*/ 
{
	int a, b;
	for(i=0;i<19;i++)
	{
    for(a=23;a>4;a--)
    {
    	if(array[1][a]==1&&array[2][a]==1&&array[3][a]==1&&array[4][a]==1&&array[5][a]==1&&array[6][a]==1&&array[7][a]==1&&array[8][a]==1&&array[9][a]==1&&array[10][a]==1&&array[11][a]==1&&array[12][a]==1&&array[13][a]==1&&array[14][a]==1&&array[15][a]==1&&array[16][a]==1&&array[17][a]==1&&array[18][a]==1)
    	{
    		array[1][a]=array[2][a]=array[3][a]=array[4][a]=array[5][a]=array[6][a]=array[7][a]=array[8][a]=array[9][a]=array[10][a]=array[11][a]=array[12][a]=array[13][a]=array[14][a]=array[15][a]=array[16][a]=array[17][a]=array[18][a]=0;
    		for(a=a-1;a>5;a--)
    		{
    			for(b=1;b<19;b++)
    			{
				if(array[b][a]==1)
    			{
    				array[b][a+1]=1;
				}
				if(array[b][a-1]==0)
				{
					array[b][a]=0;
				}
				}
    			
			}
		}
    }
}
}
