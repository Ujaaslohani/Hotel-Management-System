#include<iostream>
#include <string.h>
#include<conio.h>
#include <stdlib.h>
#include<iomanip>
#include "header.h"
#include "function.cpp"

using namespace std;
int main()
{
    int opt, opt1, opt2, opt3, opt4;
	string item;
    AVL bFast, lun, snack, din, bFast1, lun1, din1, snack1;
    bFast.insert(1,"Dosa",40);
	bFast.insert(2,"Idly",10);
    bFast.insert(3,"Puri",30);
	bFast.insert(4,"Pongal",30);
	bFast.insert(5,"Rava Upma",40);
	bFast.insert(6,"Vada",10);
	bFast.insert(7,"Kesari",20);
	bFast.insert(8,"Masala Dosa",60);
	bFast.insert(9,"Podi Dosa",60);
	bFast.insert(10,"Ghee Roast",60);

	lun.insert(11,"Meals",80);
	lun.insert(12,"Sambhar Rice",50);
	lun.insert(13,"Curd Rice",50);
	lun.insert(14,"Coriander Rice",50);
	lun.insert(15,"Mushroom Rice",50);
	lun.insert(16,"Tomato Rice",50);
	lun.insert(17,"Ghee Rice",50);
	lun.insert(18,"Vegetable Biriyani",100);
	lun.insert(19,"Paayasam",20);
	lun.insert(20,"Appalam",10);

	snack.insert(21,"Samosa",10);
	snack.insert(22,"Vegetable Puffs",15);
	snack.insert(23,"Kit Kat",10);
	snack.insert(24,"Vada",10);
	snack.insert(25,"Pepsi (1/2 L)",40);
	snack.insert(26,"Miranda (1/2 L)",45);
	snack.insert(27,"Fanta (1/2 L)",40);
	snack.insert(28,"7 Up (1/2 L)",45);

	din.insert(31,"Dosa",40);
	din.insert(32,"Idly",10);
	din.insert(33,"Puri",30);
	din.insert(34,"Pongal",30);
	din.insert(35,"Rava Upma",40);
	din.insert(36,"Vada",10);
    din.insert(37,"Kesari",20);
	din.insert(38,"Masala Dosa",60);
	din.insert(39,"Podi Dosa",60);
	din.insert(40,"Ghee Roast",60);

	cout<<"\n\n\t\t\t\tHOTEL BILLING SYSTEM\t\t\t\t\n1.Order Items\n2.Alter Menu\n3.Exit\nEnter your choice : ";
	cin>>opt2;
	while(opt2<3)
    {
	    switch(opt2)
	    {
	    	case 1:
            {
	            cout<<"\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
	            cin>>opt;
	            while(opt<5)
	            {
		            switch(opt)
		            {
			            case 1:
                        {
				            bFast.print();
				            cout<<"\nBREAKFAST MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>opt1;
				            while(opt1<5)
				            {
					            switch(opt1)
					            {
						            case 1:
                                    {
							            int itemCode, z, quan;
							            string y;
							            bFast1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>itemCode;
							            cout<<"Enter the quantity: ";
							            cin>>quan;
							            if(bFast.search(itemCode) == 0 )
							            {
							            	for(int i=0; i<quan; i++)
							            	{
							                    if(bFast1.search(itemCode) == 0)
							                    {
							                        bFast1.count(itemCode);
							                    }
						                        else if(bFast1.search(itemCode) == 1)
						                        {
						    	                    y = bFast.srch(itemCode);
							                        z = bFast.sch(itemCode);
							                        bFast1.insert(itemCode,y,z);
						                        }
						                    }
						                }
						                else
						                {
						                	cout<<"Invalid code,Please try again... \n\n";
										}
										break;
					                }
						            case 2:
                                    {
							            int itemCode, quan;
							            bFast1.s=0;
							            cout<<"Enter the code of item for deletion: ";
			                            cin>>itemCode;
			                            cout<<"Enter the  quantity  to be  deleted: ";
			                            cin>>quan;
			                            if(bFast1.search(itemCode) == 0)
			                            {
			                                if(bFast1.count2(itemCode) >= quan)
			                                {
											    for(int i=0; i<quan; i++)
											    {
			                                	    if(bFast1.count2(itemCode) == 1)
			                                	    {
			                                		    bFast1.delete1(itemCode);
			                                		    break;
												    }
												    else if(bFast1.count2(itemCode) > 1)
												    {
													    bFast1.count1(itemCode);
												    }
											    }
										    }
										    else
										    {
										    	cout<<"Entered quantity is greater than ordered quantity Please enter Valid number... \n\n";
											}
							            }
							            else
							            {
							            	cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:
                                    {
							            bFast1.frequency();
							            cout<<"\nThe total bill amount :                 "<<bFast1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:
                                    {
						            	bFast1.s=0;
										bFast1.deletetree();
										cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nBREAKFAST MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>opt1;
				            }
				            break;
			            }
			            case 2:{
				            lun.print();
				            cout<<"\nLUNCH MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>opt1;
				            while(opt1<5)
				            {
					            switch(opt1)
					            {
						            case 1:
                                    {
							            int itemCode, z, quan;
							            string y;
							            lun1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>itemCode;
							            cout<<"Enter the quantity: ";
							            cin>>quan;
							            if(lun.search(itemCode) == 0)
							            {
							            	for(int i=0; i<quan; i++)
							            	{
							                    if(lun1.search(itemCode) == 0)
							                    {
							                        lun1.count(itemCode);
							                    }
						                        else if(lun1.search(itemCode) == 1)
						                        {
						    	                    y = lun.srch(itemCode);
							                        z = lun.sch(itemCode);
							                        lun1.insert(itemCode,y,z);
						                        }
						                    }
						                }
						                else
						                {
						                	cout<<"Invalid code Please try again... \n\n";
										}
										break;
					                }
						            case 2:
                                    {
							            int itemCode, quan;
							            lun1.s=0;
							            cout<<"Enter the code of item for deletion: ";
			                            cin>>itemCode;
			                            cout<<"Enter the quantity to be deleted: ";
			                            cin>>quan;
			                            if(lun1.search(itemCode) == 0)
			                            {
			                            	if(lun1.count2(itemCode) >= quan)
			                            	{
			                                    for(int i=0; i<quan; i++){
			                                	    if(lun1.count2(itemCode) == 1)
			                                	    {
			                                		    lun1.delete1(itemCode);
			                                		    break;
												    }
												    else if(lun1.count2(itemCode) > 1)
												    {
													    lun1.count1(itemCode);
												    }
											    }
										    }
										    else
										    {
										    	cout<<"Entered quantity is greater than ordered quantity Please enter Valid number... \n\n";
											}
							            }
							            else
							            {
							            	cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:
                                    {
							            lun1.frequency();
							            cout<<"\nThe total bill amount :                 "<<lun1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:
                                    {
						            	lun1.s=0;
						            	lun1.deletetree();
						            	cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nLUNCH MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>opt1;
				            }
				            break;
			            }
			            case 3:
                        {
				            snack.print();
				            cout<<"\nSNACKS MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>opt1;
				            while(opt1<5)
				            {
					            switch(opt1)
					            {
						            case 1:
                                    {
							            int itemCode, z, quan;
							            string y;
							            snack1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>itemCode;
							            cout<<"Enter the quantity: ";
							            cin>>quan;
							            if(snack.search(itemCode) == 0)
							            {
							            	for(int i=0; i<quan; i++)
							            	{
							                    if(snack1.search(itemCode) == 0)
							                    {
							                        snack1.count(itemCode);
							                    }
						                        else if(snack1.search(itemCode) == 1)
						                        {
						    	                    y = snack.srch(itemCode);
							                        z = snack.sch(itemCode);
							                        snack1.insert(itemCode,y,z);
						                        }
						                    }
						                }
						                else
						                {
						                	cout<<"Invalid code Please try again... \n\n";
										}
										break;
					                }
						            case 2:
                                    {
			                            int itemCode, quan;
							            snack1.s=0;
							            cout<<"Enter the  code of item for deletion: ";
			                            cin>>itemCode;
			                            cout<<"Enter the quantity to be deleted: ";
			                            cin>>quan;
			                            if(snack1.search(itemCode) == 0)
			                            {
			                            	if(snack1.count2(itemCode) >= quan)
			                            	{
			                                    for(int i=0; i<quan; i++)
			                                    {
			                                	    if(snack1.count2(itemCode) == 1)
			                                	    {
			                                		    snack1.delete1(itemCode);
			                                		    break;
												    }
												    else if(snack1.count2(itemCode) > 1)
												    {
													    snack1.count1(itemCode);
												    }
											    }
										    }
										    else
										    {
										    	cout<<"Entered quantity is greater than ordered quantity Please enter Valid number... \n\n";
											}
							            }
							            else
							            {
							            	cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:
                                    {
							            snack1.frequency();
							            cout<<"\nThe total bill amount :                 "<<snack1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:
                                    {
						            	snack1.s=0;
						            	snack1.deletetree();
						            	cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nSNACKS MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>opt1;
				            }
				            break;
			            }
			            case 4:
                        {
				            din.print();
				            cout<<"\nDINNER MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
				            cin>>opt1;
				            while(opt1<5)
				            {
					            switch(opt1)
					            {
						            case 1:
                                    {
							            int itemCode, z, quan;
							            string y;
							            din1.s=0;
							            cout<<"Enter the code of item: ";
							            cin>>itemCode;
							            cout<<"Enter the quantity: ";
							            cin>>quan;
							            if(din.search(itemCode) == 0)
							            {
							            	for(int i=0; i<quan; i++)
							            	{
							                    if(din1.search(itemCode) == 0)
							                    {
							                        din1.count(itemCode);
							                    }
						                        else if(din1.search(itemCode) == 1)
						                        {
						    	                    y = din.srch(itemCode);
							                        z = din.sch(itemCode);
							                        din1.insert(itemCode,y,z);
						                        }
						                    }
						                }
						                else
						                {
						                	cout<<"Invalid code pls try again... \n\n";
										}
										break;
					                }
						            case 2:
                                    {
			                            int itemCode, quan;
							            din1.s=0;
							            cout<<"Enter the code of item for deletion: ";
			                            cin>>itemCode;
			                            cout<<"Enter the quantity to be deleted: ";
			                            cin>>quan;
			                            if(din1.search(itemCode) == 0)
			                            {
			                            	if(din1.count2(itemCode) >= quan)
			                            	{
			                                    for(int i=0; i<quan; i++)
			                                    {
			                                	    if(din1.count2(itemCode) == 1)
			                                	    {
			                                		    din1.delete1(itemCode);
			                                		    break;
												    }
												    else if(din1.count2(itemCode) > 1)
												    {
													    din1.count1(itemCode);
												    }
											    }
										    }
										    else
										    {
										    	cout<<"Entered quantity is greater than ordered quantity Please enter Valid number... \n\n";
											}
							            }
										else
										{
											cout<<"Invalid code please try again... \n\n";
										}
										break;
						            }
						            case 3:
                                    {
							            din1.frequency();
							            cout<<"\nThe total bill amount :                 "<<din1.s<<endl;
							            cout<<left<<setw(76)<<setfill('-')<<""<<endl;
							            break;
						            }
						            case 4:
                                    {
						            	din1.s=0;
						            	din1.deletetree();
						            	cout<<"\nThe old Bill was deleted, New Bill can be ordered now...\n";
										break;
									}
					            }
					            cout<<"\nDINNER MENU:\n1.Order\n2.Cancel item\n3.Bill\n4.ReBill\n5.Exit\nEnter your choice : ";
					            cin>>opt1;
				            }
				            break;
			            }
		            }
		            cout<<"\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
					cin>>opt;
	            }
                break;
			}
			case 2:
            {
				int uId=1234;
				char cass[30]={'H','s','3','!','$','5'};
				int p;
				cout<<"\nEnter UserID: ";
				cin>>p;
	            cout<<"\nEnter Password: ";
	            char pass[30];
	            int i=0;
	            char a;
	            for(i=0; ; )
	            {
		            a=getch();
		            if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||(a>='!'&&a<='@'))
                    {
			            pass[i]=a;
			            ++i;
			            cout<<"*";
		            }
		            if(a=='\b'&&i>=1)
		            {
			            cout<<"\b \b";
			            --i;
		            }
		            if(a=='\r')
		            {
			            pass[i]='\0';
			            break;
		            }
	            }
	            if(i<=5)
                {
		            cout<<"\nMinimum 6 digits needed...";
	            }
	            int g;
				if(p == uId)
                {
					for(int i=0; i<6; )
					{
						if(pass[i] == cass[i])
						{
							g = 1;
							i++;
						}
						else
						{
							g = 0;
							break;
						}
					}
					if(g == 1)
                    {
				        cout<<"\n\nALTER MENU:\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
	                    cin>>opt3;
	                    while(opt3<5)
                        {
		                    switch(opt3)
		                    {
			                    case 1:
                                {
				                    cout<<"\n\nALTER MENU:\nBreakfast Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>opt4;
				                    while(opt4<5)
				                    {
					                    switch(opt4)
					                    {
						                    case 1:
                                            {
						            	        int x, z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
			                                    cin>>x;
			                                    if(bFast.search(x) == 1)
			                                    {
			                                        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
											        bFast.insert(x, y, z);
			                                        cout<<"The Item is Inserted to the Menu... \n\n";
										        }
						                        else if(bFast.search(x) == 0)
						                        {
						                	        cout<<"Entered code already exist .Use another code... \n\n";
										        }
										        break;
					                        }
						                    case 2:
                                            {
						            	        int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(bFast.search(x) == 0)
			                                    {
			                                        bFast.delete1(x);
							                        cout<<"The Item is deleted from the menu... \n\n";
									            }
									            else
									            {
									    	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 3:
                                            {
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(bFast.search(x) == 0){
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													bFast.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 4:
                                            {
						            	        bFast.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nALTER MENU:\nBreakfast Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>opt4;
				                    }
				                    break;
			                    }
			                    case 2:
                                {
				                    cout<<"\n\nALTER MENU:\nLunch Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>opt4;
				                    while(opt4<5)
                                    {
					                    switch(opt4)
					                    {
						                    case 1:
                                            {
							                    int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
			                                    cin>>x;
			                                    if(lun.search(x) == 1)
			                                    {
			                            	        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
			                                        lun.insert(x, y, z);
						                            cout<<"The Item is Inserted to the Menu... \n\n";
						                        }
						                        else{
						                	        cout<<"Entered code already exist .Use another code... \n\n";
										        }
										        break;
					                        }
						                    case 2:
                                            {
							                    int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(lun.search(x) == 0)
			                                    {
			                                        lun.delete1(x);
							                        cout<<"The Item is deleted from the menu... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Enter code is not Exist Please used to Valid code... \n\n";
										        }
										        break;
						                    }
						                    case 3:
                                            {
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(lun.search(x) == 0){
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													lun.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 4:
                                            {
						            	        lun.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nALTER MENU:\nLunch Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>opt4;
				                    }
				                    break;
			                    }
			                    case 3:
                                {
				                    cout<<"\n\nALTER MENU:\nSnacks Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>opt4;
				                    while(opt4<5)
                                    {
					                    switch(opt4)
					                    {
						                    case 1:
                                            {
							                    int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
                                                cin>>x;
			                                    if(snack.search(x) == 1)
			                                    {
			                            	        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
			                                        snack.insert(x, y, z);
						                            cout<<"The Item is Inserted to the Menu... \n\n";
						                        }
						                        else
						                        {
						                	        cout<<"Enter code is Already Exist Please used to another code... \n\n";
										        }
										        break;
					                        }
						                    case 2:
                                            {
							                    int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(snack.search(x) == 0)
			                                    {
			                                        snack.delete1(x);
							                        cout<<"The Item is deleted from the menu... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 3:
                                            {
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(snack.search(x) == 0)
			                                    {
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													snack.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 4:
                                            {
						            	        snack.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nALTER MENU:\nSnacks Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>opt4;
				                    }
				                    break;
			                    }
			                    case 4:
                                {
				                    cout<<"\n\nALTER MENU:\nDinner Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
				                    cin>>opt4;
				                    while(opt4<5)
                                    {
					                    switch(opt4)
					                    {
						                    case 1:
                                            {
							                    int x,z;
						            	        string y;
							                    cout<<"Enter item code to be inserted: ";
			                                    cin>>x;
			                                    if(din.search(x) == 1)
			                                    {
			                            	        cout<<"Enter item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter price for the item: ";
			                                        cin>>z;
			                                        din.insert(x, y, z);
						                            cout<<"The Item is Inserted to the Menu... \n\n";
						                        }
						                        else
						                        {
						                	        cout<<"Entered code already exist .Use another code... \n\n";
										        }
										        break;
					                        }
						                    case 2:
                                            {
							                    int x;
							                    cout<<"Enter the item code to be deleted: ";
			                                    cin>>x;
			                                    if(din.search(x) == 0){
			                                        din.delete1(x);
							                        cout<<"The Item is deleted from the menu... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Invalid code Please try again... \n\n";
										        }
										        break;
						                    }
						                    case 3:
                                            {
						            	        int x,z;
						            	        string y;
							                    cout<<"Enter item code to be updated: ";
			                                    cin>>x;
			                                    if(din.search(x) == 0)
			                                    {
			                                        cout<<"Enter new item name for the code: ";
			                                        cin>>y;
			                                        cout<<"Enter new price for the item: ";
			                                        cin>>z;
													din.update(x, y, z);
			                                        cout<<"Item is updated successfully... \n\n";
							                    }
							                    else
							                    {
							            	        cout<<"Entered code is not Exist Please used to other code... \n\n";
										        }
										        break;
						                    }
						                    case 4:
                                            {
						            	        din.print();
										        break;
									        }
					                    }
					                    cout<<"\n\nALTER MENU:\nDinner Menu\n1.Insert\n2.Delete item\n3.Update\n4.Display\n5.Exit\nEnter your choice : ";
					                    cin>>opt4;
				                    }
				                    break;
			                    }
		                    }
		                    cout<<"\n\nALTER MENU:\n1.Breakfast\n2.Lunch\n3.Snacks\n4.Dinner\n5.Exit\nEnter your choice : ";
					        cin>>opt3;
	                    }
	                }
	                else if(g == 0)
                    {
	            	    cout<<"\nPlease Enter the currect Password...\n";
				    }
			    }
			    else
                {
			    	cout<<"\nPlease Enter the currect UserID & Password...\n";
				}
				break;
			}
        }
        cout<<"\n1.Order Items\n2.Alter Menu\n3.Exit\nEnter your choice : ";
	    cin>>opt2;
    }
    return 0;
}
