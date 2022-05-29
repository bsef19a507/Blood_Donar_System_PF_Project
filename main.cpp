#include <iostream>
#include<fstream>
#include <string>
#include <sstream>
#include <iomanip>


using namespace std;

//Struct Data type for Donar...
struct Donar{
	string name;
	string ID;
	string department;
	string bloodGroup;
	int no_of_donations;
	string phone;
	string email;
	int age;
	int weight;
};


// function to view all Donars...
void donarList(){
	
	ifstream inFile("bds_donor_data.txt");
    if (inFile.is_open())
    {
        string line;
        while( getline(inFile,line) )
        {
            stringstream ss(line);
		    string name,ID,department,bloodGroup,no_of_donations,phone,email,age,weight;
		    
            getline(ss,ID,',');   
            getline(ss,name,','); 
            getline(ss,department,','); 
            getline(ss,bloodGroup,',');   
            getline(ss,no_of_donations,','); 
            getline(ss,age,','); 
            getline(ss,weight,',');   
            getline(ss,phone,','); 
            getline(ss,email,','); 
            
            
        	cout << left << setw(10) << setfill(' ') << ID;
	    	cout << left << setw(15) << setfill(' ') << name;
	    	cout << left << setw(15) << setfill(' ') << department;
	    	cout << left << setw(12) << setfill(' ') << bloodGroup;
	    	cout << left << setw(15) << setfill(' ') << no_of_donations;
	    	cout << left << setw(6) << setfill(' ') << age;
	    	cout << left << setw(10) << setfill(' ') << weight;
	    	cout << left << setw(15) << setfill(' ') << weight;
	    	cout << left << setw(40) << setfill(' ') << email;
	    	cout<<endl;
			

          
        }
    }
	
}







//function to save donar records...
void addDonar(){
	
	Donar donar;
	cin.ignore();
	cout<<"\tEnter Donar's Name: ";
	getline(cin, donar.name);
	cout<<"\tEnter Donar's ID: ";
	getline(cin,donar.ID);
	cout<<"\tEnter Donar's Department: ";
	getline(cin,donar.department);
	cout<<"\tEnter Donar's Blood Group: ";
	getline(cin,donar.bloodGroup);
	cout<<"\tEnter Donar's No. of Donations: ";
	cin>>donar.no_of_donations;
	cout<<"\tEnter Donar's Phone Number: ";
	cin>>donar.phone;
	cout<<"\tEnter Donar's Email Address: ";
	cin>>donar.email;
	cout<<"\tEnter Donar's Age: ";
	cin>>donar.age;
	cout<<"\tEnter Donar's Weight: ";
	cin>>donar.weight;
	
	if(donar.age<18){
		system("cls");
		cout<<"\nDonar is not Eligible. Minimum Age limit is 18 Years.\n";
	}else if(){
		system("cls");
		cout<<"\nDonar is not Eligible. Minimum Age limit is 18 Years.\n";
	}else{
		ofstream fout;
	    ifstream fin;
	    
	    fin.open("bds_donor_data.txt");
	    fout.open ("bds_donor_data.txt",ios::app);
	    
	    if(fin.is_open()){
	    	fout<<donar.ID<<","<<donar.name<<","<<donar.department<<","<<donar.bloodGroup<<","<<donar.no_of_donations<<","<<donar.age<<","<<donar.weight<<","<<donar.phone<<","<<donar.email<<"\n";
		}
	    system("cls");
	    cout<<"\nDonar Record Saved Successfully!"<<endl;
	    fin.close();
	    fout.close();
	}
	
  
   
}


// function to search Donar by name...
void searchDonar(string searchName){
	int find = 0;
	ifstream inFile("bds_donor_data.txt");
    if (inFile.is_open())
    {
        string line;
        while( getline(inFile,line) )
        {
            stringstream ss(line);
		    string name,ID,department,bloodGroup,no_of_donations,phone,email,age,weight;
		    
            getline(ss,ID,',');   
            getline(ss,name,','); 
            getline(ss,department,','); 
            getline(ss,bloodGroup,',');   
            getline(ss,no_of_donations,','); 
            getline(ss,age,','); 
            getline(ss,weight,',');   
            getline(ss,phone,','); 
            getline(ss,email,','); 
            
            if(name == searchName){
            	find = 1;
            	cout << left << setw(10) << setfill(' ') << ID;
		    	cout << left << setw(15) << setfill(' ') << name;
		    	cout << left << setw(15) << setfill(' ') << department;
		    	cout << left << setw(12) << setfill(' ') << bloodGroup;
		    	cout << left << setw(15) << setfill(' ') << no_of_donations;
		    	cout << left << setw(6) << setfill(' ') << age;
		    	cout << left << setw(10) << setfill(' ') << weight;
		    	cout << left << setw(15) << setfill(' ') << weight;
		    	cout << left << setw(40) << setfill(' ') << email;
		    	cout<<endl;
			}

          
        }
    }
     if(find==0){
    	system("cls");
    	cout<<"\nNo Donar Found!";
    	cout<<endl;
	}
	
}




// function to search Donar by Blood Group...
void searchDonarGroup(string groupName){
	int find = 0;
	ifstream inFile("bds_donor_data.txt");
    if (inFile.is_open())
    {
        string line;
        while( getline(inFile,line) )
        {
            stringstream ss(line);
		    string name,ID,department,bloodGroup,no_of_donations,phone,email,age,weight;
		    
            getline(ss,ID,',');   
            getline(ss,name,','); 
            getline(ss,department,','); 
            getline(ss,bloodGroup,',');   
            getline(ss,no_of_donations,','); 
            getline(ss,age,','); 
            getline(ss,weight,',');   
            getline(ss,phone,','); 
            getline(ss,email,','); 
            
            if(bloodGroup == groupName){
            	find = 1;
            	cout << left << setw(10) << setfill(' ') << ID;
		    	cout << left << setw(15) << setfill(' ') << name;
		    	cout << left << setw(15) << setfill(' ') << department;
		    	cout << left << setw(12) << setfill(' ') << bloodGroup;
		    	cout << left << setw(15) << setfill(' ') << no_of_donations;
		    	cout << left << setw(6) << setfill(' ') << age;
		    	cout << left << setw(10) << setfill(' ') << weight;
		    	cout << left << setw(15) << setfill(' ') << weight;
		    	cout << left << setw(40) << setfill(' ') << email;
		    	cout<<endl;
			}

          
        }
    }
    
    if(find==0){
    	system("cls");
    	cout<<"\nNo Donar Found!";
    	cout<<endl;
	}
	
}


// function to update donar...

void updateDonar(string id){
	int updated = 0;
	string updatedName;
	
    ofstream fout;
    ifstream fin; 
    
    fin.open("temp.txt");
    fout.open ("temp.txt");
    
    ifstream inFile("bds_donor_data.txt");
    if (inFile.is_open())
    {
        string line;
        while( getline(inFile,line) )
        {
				
			stringstream ss(line);
		    string name,ID,department,bloodGroup,no_of_donations,phone,email,age,weight;
		    
            getline(ss,ID,',');   
            getline(ss,name,','); 
            getline(ss,department,','); 
            getline(ss,bloodGroup,',');   
            getline(ss,no_of_donations,','); 
            getline(ss,age,','); 
            getline(ss,weight,',');   
            getline(ss,phone,','); 
            getline(ss,email,','); 
            
            if(ID == id){
            	updatedName = name;
            	updated = 1;
        		system("cls");
				cout<<endl;
				cout << left << setw(10) << setfill(' ') << "ID";
		    	cout << left << setw(15) << setfill(' ') << "Name";
		    	cout << left << setw(15) << setfill(' ') << "Department";
		    	cout << left << setw(12) << setfill(' ') << "Blood";
		    	cout << left << setw(15) << setfill(' ') << "Donations";
		    	cout << left << setw(6) << setfill(' ') << "Age";
		    	cout << left << setw(10) << setfill(' ') << "Weight";
		    	cout << left << setw(15) << setfill(' ') << "Phone";
		    	cout << left << setw(40) << setfill(' ') << "Email";
	    		cout<<endl;
	            searchDonar(name);
            	int choice;
            	cout<<"1. Update Name"<<endl;
            	cout<<"2. Update Department"<<endl;
            	cout<<"3. Update Blood Group"<<endl;
            	cout<<"4. Update No of Donations"<<endl;
            	cout<<"5. Update Age"<<endl;
            	cout<<"6. Update Weight"<<endl;
            	cout<<"7. Update Phone"<<endl;
            	cout<<"8. Update Email"<<endl;
            	cout<<"9. Exit"<<endl;
            	cout<<"Enter Your Choice: ";
            	cin>>choice;
            	
            	switch(choice){
            		case 1:{
            		    string newName;
            		    cin.ignore();
            		    cout<<"Enter Name:";
						getline(cin,newName);
						updatedName = newName;
						if(fin.is_open())
						{
			    			fout<<ID<<","<<newName<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
						}
            			
						break;
					}
					case 2:{
						string newDepart;
            		    cin.ignore();
            		    cout<<"Enter Department:";
						getline(cin,newDepart);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<newDepart<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
						}
						
						break;
					}
					case 3:{
						string newGroup;
            		    cin.ignore();
            		    cout<<"Enter Blood Group:";
						getline(cin,newGroup);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<newGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
						}
						break;
					}
					case 4:{
						string donations;
            		    cin.ignore();
            		    cout<<"Enter No. of Donations:";
						getline(cin,donations);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
						}						
            			
						break;
					}
					case 5:{
						string newAge;
            		    cin.ignore();
            		    cout<<"Enter Age:";
						getline(cin,newAge);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<newAge<<","<<weight<<","<<phone<<","<<email<<"\n";
						}	
						
						break;
					}
					case 6:{
						string newWeight;
            		    cin.ignore();
            		    cout<<"Enter Weight:";
						getline(cin,newWeight);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<newWeight<<","<<phone<<","<<email<<"\n";
						}	
						
						
						break;
					}
					case 7:{
						string newPhone;
            		    cin.ignore();
            		    cout<<"Enter Phone:";
						getline(cin,newPhone);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<newPhone<<","<<email<<"\n";
						}	
						
						break;
					}
					case 8:{
						string newEmail;
            		    cin.ignore();
            		    cout<<"Enter Email:";
						getline(cin,newEmail);
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<newEmail<<"\n";
						}	
						
						break;
					}
					case 9:{
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
						}
						break;
					}
					default:{
						if(fin.is_open())
						{
			    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
						}
						break;
					}
				
				}
            
			}else{
				if(fin.is_open())
				{
	    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
				}
			}

		}
        
    }
    
    fin.close();
    fout.close();
    inFile.close();
    
    
    ofstream newFile;
    ifstream tempFile; 
    
    tempFile.open("temp.txt");
    newFile.open ("bds_donor_data.txt");
    if (tempFile.is_open())
    {
        string line;
        while( getline(tempFile,line) )
        {
			newFile<<line<<"\n";
		}
	}
	tempFile.close();
    newFile.close();
	
	if(updated == 1){
		system("cls");
    	cout<<"\nRecord Updated Successfully!";
    	cout<<endl;
		cout<<endl;
		cout << left << setw(10) << setfill(' ') << "ID";
    	cout << left << setw(15) << setfill(' ') << "Name";
    	cout << left << setw(15) << setfill(' ') << "Department";
    	cout << left << setw(12) << setfill(' ') << "Blood";
    	cout << left << setw(15) << setfill(' ') << "Donations";
    	cout << left << setw(6) << setfill(' ') << "Age";
    	cout << left << setw(10) << setfill(' ') << "Weight";
    	cout << left << setw(15) << setfill(' ') << "Phone";
    	cout << left << setw(40) << setfill(' ') << "Email";
		cout<<endl;
        searchDonar(updatedName);
	}else{
		system("cls");
    	cout<<"\nNo Record Found with this ID!";
    	cout<<endl;
	}
}




// function to Delete donar...

void deleteDonar(string id){
	int deleted = 0;
	
    ofstream fout;
    ifstream fin; 
    
    fin.open("temp.txt");
    fout.open ("temp.txt");
    
    ifstream inFile("bds_donor_data.txt");
    if (inFile.is_open())
    {
        string line;
        while( getline(inFile,line) )
        {
				
			stringstream ss(line);
		    string name,ID,department,bloodGroup,no_of_donations,phone,email,age,weight;
		    
            getline(ss,ID,',');   
            getline(ss,name,','); 
            getline(ss,department,','); 
            getline(ss,bloodGroup,',');   
            getline(ss,no_of_donations,','); 
            getline(ss,age,','); 
            getline(ss,weight,',');   
            getline(ss,phone,','); 
            getline(ss,email,','); 
            
            if(ID == id){
            	deleted = 1;
            
			}else{
				if(fin.is_open())
				{
	    			fout<<ID<<","<<name<<","<<department<<","<<bloodGroup<<","<<no_of_donations<<","<<age<<","<<weight<<","<<phone<<","<<email<<"\n";
				}
			}

		}
        
    }
    
    fin.close();
    fout.close();
    inFile.close();
    
    
    ofstream newFile;
    ifstream tempFile; 
    
    tempFile.open("temp.txt");
    newFile.open ("bds_donor_data.txt");
    if (tempFile.is_open())
    {
        string line;
        while( getline(tempFile,line) )
        {
			newFile<<line<<"\n";
		}
	}
	tempFile.close();
    newFile.close();
	
	if(deleted == 1){
		system("cls");
    	cout<<"\nRecord Deleted Successfully!";
    	cout<<endl;
        cout<<endl;
		cout << left << setw(10) << setfill(' ') << "ID";
    	cout << left << setw(15) << setfill(' ') << "Name";
    	cout << left << setw(15) << setfill(' ') << "Department";
    	cout << left << setw(12) << setfill(' ') << "Blood";
    	cout << left << setw(15) << setfill(' ') << "Donations";
    	cout << left << setw(6) << setfill(' ') << "Age";
    	cout << left << setw(10) << setfill(' ') << "Weight";
    	cout << left << setw(15) << setfill(' ') << "Phone";
    	cout << left << setw(40) << setfill(' ') << "Email";
		cout<<endl;
        donarList();
	
	}else{
		system("cls");
    	cout<<"\nNo Record Found with this ID!";
    	cout<<endl;
	}
}

// Main Driver Function....

int main()
{

    while(1)
    {
    	
    
    
        int n;
        cout<<"\n===========================================";
        cout<<"\n|      Blood Donor Management System      |"<<endl;
        cout<<"===========================================";
        cout<<"\n\n\t::Enter Your Choice::"<<endl;
        cout<<"\n\t0. View All Donars\n\t1. Add New Donar\n\t2. Search Donar by Name\n\t3. Search Donar List by Blood Group\n\t4. Update Donar\n\t5. Remove Donar\n\t6. Exit\n"<<endl;
        cout<<"\tEnter Choice: ";
        cin>>n;
        switch (n)
        {

		case 0:
        {
            system("cls");
            cout<<endl;
			cout << left << setw(10) << setfill(' ') << "ID";
	    	cout << left << setw(15) << setfill(' ') << "Name";
	    	cout << left << setw(15) << setfill(' ') << "Department";
	    	cout << left << setw(12) << setfill(' ') << "Blood";
	    	cout << left << setw(15) << setfill(' ') << "Donations";
	    	cout << left << setw(6) << setfill(' ') << "Age";
	    	cout << left << setw(10) << setfill(' ') << "Weight";
	    	cout << left << setw(15) << setfill(' ') << "Phone";
	    	cout << left << setw(40) << setfill(' ') << "Email";
    		cout<<endl;
            donarList();
        }
        break;
        case 1:
        {
            system("cls");
            addDonar();
        }
        break;

        case 2:
        {
            system("cls");
            cin.ignore();
            string name;
            cout<<"\nEnter Donar's Name you want to Search: ";
			getline(cin,name);
			system("cls");
			cout<<endl;
			cout << left << setw(10) << setfill(' ') << "ID";
	    	cout << left << setw(15) << setfill(' ') << "Name";
	    	cout << left << setw(15) << setfill(' ') << "Department";
	    	cout << left << setw(12) << setfill(' ') << "Blood";
	    	cout << left << setw(15) << setfill(' ') << "Donations";
	    	cout << left << setw(6) << setfill(' ') << "Age";
	    	cout << left << setw(10) << setfill(' ') << "Weight";
	    	cout << left << setw(15) << setfill(' ') << "Phone";
	    	cout << left << setw(40) << setfill(' ') << "Email";
    		cout<<endl;
            searchDonar(name);
        }
        break;
        case 3:
        {
           	system("cls");
            cin.ignore();
            string group;
            cout<<"\nEnter Blood Group you want to Search (e.g A+): ";
			getline(cin, group);
			system("cls");
			cout<<endl;
			cout << left << setw(10) << setfill(' ') << "ID";
	    	cout << left << setw(15) << setfill(' ') << "Name";
	    	cout << left << setw(15) << setfill(' ') << "Department";
	    	cout << left << setw(12) << setfill(' ') << "Blood";
	    	cout << left << setw(15) << setfill(' ') << "Donations";
	    	cout << left << setw(6) << setfill(' ') << "Age";
	    	cout << left << setw(10) << setfill(' ') << "Weight";
	    	cout << left << setw(15) << setfill(' ') << "Phone";
	    	cout << left << setw(40) << setfill(' ') << "Email";
    		cout<<endl;
            searchDonarGroup(group);
        }
        break;
        case 4:
        {
        	system("cls");
            cout<<endl;
			cout << left << setw(10) << setfill(' ') << "ID";
	    	cout << left << setw(15) << setfill(' ') << "Name";
	    	cout << left << setw(15) << setfill(' ') << "Department";
	    	cout << left << setw(12) << setfill(' ') << "Blood";
	    	cout << left << setw(15) << setfill(' ') << "Donations";
	    	cout << left << setw(6) << setfill(' ') << "Age";
	    	cout << left << setw(10) << setfill(' ') << "Weight";
	    	cout << left << setw(15) << setfill(' ') << "Phone";
	    	cout << left << setw(40) << setfill(' ') << "Email";
    		cout<<endl;
            donarList();
            cin.ignore();
            string donarID;
            cout<<"\nEnter ID of Donar you want to Update: ";
			getline(cin, donarID);
			system("cls");
            updateDonar(donarID);
        }
        break;
        case 5:
        {	
        	system("cls");
            cout<<endl;
			cout << left << setw(10) << setfill(' ') << "ID";
	    	cout << left << setw(15) << setfill(' ') << "Name";
	    	cout << left << setw(15) << setfill(' ') << "Department";
	    	cout << left << setw(12) << setfill(' ') << "Blood";
	    	cout << left << setw(15) << setfill(' ') << "Donations";
	    	cout << left << setw(6) << setfill(' ') << "Age";
	    	cout << left << setw(10) << setfill(' ') << "Weight";
	    	cout << left << setw(15) << setfill(' ') << "Phone";
	    	cout << left << setw(40) << setfill(' ') << "Email";
    		cout<<endl;
            donarList();
            cin.ignore();
            string donarID;
            cout<<"\nEnter ID of Donar you want to Remove: ";
			getline(cin, donarID);
			system("cls");
            deleteDonar(donarID);
        }
        break;
        case 6:
        {
        	system("cls");
        	return 0;
        }
        break;

        default:
        {
            system("cls");
            cout<<"\a\aPlease Enter your choice Correctly:\a\a"<<endl;
        }
        break;
        }

    }
    return 0;
}
