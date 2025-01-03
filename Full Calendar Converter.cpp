#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int ethy,ethm,ethd;
	int gregy,gregm,gregd;
	int d,m,y;
	int choose;
    char redo;
    string gregmonth[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string ethmonth[13] = {"Meskerem", "Tikimt", "Hidar", "Tahisas", "Tir", "Yekatit", "Megabit", "Miyazia", "Ginbot", "Sene", "Hamle", "Nehase", "Psagume"};
    cout<<"**************************************"<<endl;
    cout<<"Welcome to the Calendar Converter v1.0"<<endl;
    cout<<"**************************************"<<endl;
    cout<<endl<<endl<<endl;
    
    do{
	   
	   cout<<"===> Please enter a conversion pathway you would like to proceed with."<<endl;
	   cout<<"     '1' for Gregorean to Ethiopian and '2' for Ethiopian to Gregorean: ";
	   cin>>choose;
	   cout<<"Input the date you want to convert"<<endl;
	   cout<<"Day:";
	   cin>>d;
	   cout<<"Month:";
	   cin>>m;
	   cout<<"Year:";
	   cin>>y;
	   
	   
	   switch (choose)
    {
        //From Gregorean to Ethiopian
     case 1:
	             
             if(m<=8 && m>=1){
             	ethy=y-8;
			 }
			 else if(m==9){
			 	if(y%4==3){
			 		if(d<=11){
			 			ethy=y-8;
					 }
					 else{
					 	ethy=y-7;
					 }
				 }
	 		 	else{
			 	 if(d<=10){
			 	 		ethy=y-8;
				}
				 else{
				 	ethy=y-7;
				 }
			 	}
			 }
			else{
				ethy=y-7;
			}
			
			
			switch(m){
				case 1:
					if(ethy%4==0){
						if(d<10){
							ethm=4;
							ethd=d-10+31;
						}
						else{
							ethm=5;
							ethd=d-9;
						}
					}
					else{
						if(d<9){
							ethm=4;
							ethd=d-9+31;
						}
						else{
							ethm=5;
							ethd=d-8;
						}						
					}
					break;
				case 2:
					if(ethy%4==0){
						if(d<9){
							ethm=5;
							ethd=d-9+31;
						}
						else{
							ethm=6;
							ethd=d-8;
						}
					}
					else{
						if(d<8){
							ethm=5;
							ethd=d-8+31;
						}
						else{
							ethm=6;
							ethd=d-7;
						}						
					}
					break;					
				case 3:
			 		if(d<10){
						ethm=6;
						ethd=d-10+31;
					}
					else{
						ethm=7;
						ethd=d-9;
					}
					break;
				case 4:
			 		if(d<9){
						ethm=7;
						ethd=d-9+31;
					}
					else{
						ethm=8;
						ethd=d-8;
					}
					break;
				case 5:
			 		if(d<9){
						ethm=8;
						ethd=d-9+31;
					}
					else{
						ethm=9;
						ethd=d-8;
					}
					break;
				case 6:
			 		if(d<8){
						ethm=9;
						ethd=d-8+31;
					}
					else{
						ethm=10;
						ethd=d-7;
					}
					break;
				case 7:
			 		if(d<8){
						ethm=10;
						ethd=d-8+31;
					}
					else{
						ethm=11;
						ethd=d-7;
					}
					break;
				case 8:
			 		if(d<7){
						ethm=11;
						ethd=d-7+31;
					}
					else{
						ethm=12;
						ethd=d-6;
					}
					break;
				case 9:
					if(d<6){
						ethm=12;
						ethd=d-6+31;
					}
					else{
						if(y%4==3){
							if(d<12){
								ethm=13;
								ethd=d-5;
							}
							else{
								ethm=1;
								ethd=d-11;
							}
						}
						else{
							if(d<11){
								ethm=13;
								ethd=d-5;
							}
							else{
								ethm=1;
								ethd=d-10;
							}
						}
					}
					break;
				case 10:
					if(ethy%4==0){
						if(d<12){
							ethm=1;
							ethd=d-12+31;
						}
						else{
							ethm=2;
							ethd=d-11;
						}
					}
					else{
						if(d<11){
							ethm=1;
							ethd=d-11+31;
						}
						else{
							ethm=2;
							ethd=d-10;
						}						
					}
					break;
				case 11:
					if(ethy%4==0){
						if(d<11){
							ethm=2;
							ethd=d-11+31;
						}
						else{
							ethm=3;
							ethd=d-10;
						}
					}
					else{
						if(d<10){
							ethm=2;
							ethd=d-10+31;
						}
						else{
							ethm=3;
							ethd=d-9;
						}						
					}
					break;
				case 12:
					if(ethy%4==0){
						if(d<11){
							ethm=3;
							ethd=d-11+31;
						}
						else{
							ethm=4;
							ethd=d-10;
						}
					}
					else{
						if(d<10){
							ethm=3;
							ethd=d-10+31;
						}
						else{
							ethm=4;
							ethd=d-9;
						}						
					}
					break;
				default:
					cout<<"Wrong input!"<<endl;
			}
			cout<<"You inputed "<<gregmonth[m-1]<<" "<<d<<", "<<y<<" G.C."<<endl<<endl;
			cout<<"The converted date in Ethiopian Calendar is:"<<endl<<"===> "<<ethmonth[ethm-1]<<" "<<ethd<<", "<<ethy<<" E.C."<<endl;
			
             break;
			 
	 //from Ethiopian to Gregorean
     case 2:
     	
	 	if(m<=3 && m>=1){
            gregy=y+7;	
		}
		else if(m==4){
			if(y%4==0){
				if(d<22){
					gregy=y+7;
				}
				else{
					gregy=y+8;
				}
			}
			else{
				if(d<23){
					gregy=y+7;
				}
				else{
					gregy=y+8;
				}
			}
		}
		else{
			gregy=y+8;
		}
		
		switch(m){
			case 1:
				if(y%4==0){
					if(d<20){
						gregm=9;
						gregd=d+11;
					}
					else{
						gregm=10;
						gregd=d-19;
					}
				}
				else{
					if(d<21){
						gregm=9;
						gregd=d+10;
					}
					else{
						gregm=10;
						gregd=d-20;
					}
				}
				break;
			case 2:
				if(y%4==0){
					if(d<21){
						gregm=10;
						gregd=d+11;
					}
					else{
						gregm=11;
						gregd=d-20;
					}
				}
				else{
					if(d<22){
						gregm=10;
						gregd=d+10;
					}
					else{
						gregm=11;
						gregd=d-21;
					}
				}
				break;
			case 3:
				if(y%4==0){
					if(d<21){
						gregm=11;
						gregd=d+10;
					}
					else{
						gregm=12;
						gregd=d-20;
					}
				}
				else{
					if(d<22){
						gregm=11;
						gregd=d+9;
					}
					else{
						gregm=12;
						gregd=d-21;
					}
				}
				break;
			case 4:
				if(y%4==0){
					if(d<22){
						gregm=12;
						gregd=d+10;
					}
					else{
						gregm=1;
						gregd=d-21;
					}
				}
				else{
					if(d<23){
						gregm=12;
						gregd=d+9;
					}
					else{
						gregm=1;
						gregd=d-22;
					}
				}
				break;
			case 5:
				if(y%4==0){
					if(d<23){
						gregm=1;
						gregd=d+9;
					}
					else{
						gregm=2;
						gregd=d-22;
					}
				}
				else{
					if(d<24){
						gregm=1;
						gregd=d+8;
					}
					else{
						gregm=2;
						gregd=d-23;
					}
				}
				break;
			case 6:
				if(y%4==0){
					if(d<22){
						gregm=2;
						gregd=d+8;
					}
					else{
						gregm=3;
						gregd=d-21;
					}
				}
				else{
					if(d<22){
						gregm=2;
						gregd=d+7;
					}
					else{
						gregm=3;
						gregd=d-21;
					}
				}
				break;
			case 7:
				if(d<23){
					gregm=3;
					gregd=d+9;
				}
				else{
					gregm=4;
					gregd=d-22;
				}
				break;
			case 8:
				if(d<23){
					gregm=4;
					gregd=d+8;
				}
				else{
					gregm=5;
					gregd=d-22;
				}
				break;
			case 9:
				if(d<24){
					gregm=5;
					gregd=d+8;
				}
				else{
					gregm=6;
					gregd=d-23;
				}
				break;
			case 10:
				if(d<24){
					gregm=6;
					gregd=d+7;
				}
				else{
					gregm=7;
					gregd=d-23;
				}
				break;
			case 11:
				if(d<25){
					gregm=7;
					gregd=d+7;
				}
				else{
					gregm=8;
					gregd=d-24;
				}
				break;
			case 12:
				if(d<26){
					gregm=8;
					gregd=d+6;
				}
				else{
					gregm=9;
					gregd=d-25;
				}
				break;
			case 13:
				gregm=9;
				gregd=d+5;
				break;
		}
		
		cout<<"You inputed "<<ethmonth[m-1]<<" "<<d<<", "<<y<<" E.C."<<endl<<endl;
		cout<<"The converted date in Gregorean Calendar is:"<<endl<<"===> "<<gregmonth[gregm-1]<<" "<<gregd<<", "<<gregy<<" G.C."<<endl;
		
  		break;
      default:
              cout<<"Wrong input!"<<endl;
      
           }
    cout<<"enter y or Y to continue:";
    cin>>redo;
    cout<<endl<<endl;
           
	}
	
	while(redo=='y'||redo=='Y');
	
	
	system("pause");
    return 0;
	
}
