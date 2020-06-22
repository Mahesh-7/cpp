#include <iostream>
#include <string>


class Person
{
	protected:
		//std::string name;
		unsigned char age;
	public:
		virtual void getdata(void);
		virtual void putdata(void);
};

class Student : public Person
{
	private:
		unsigned int Mark[6];
		int cur_id;
		unsigned int Total;
		
	public:
		void putdata(void);
		void getdata(void);	
};

void Student::getdata(void)
{
	unsigned char i;
	
	Total = 0;
	
	//std::cin >> name >> age;
	
	for (i=0; i<6; i++)
	{
		std::cin >> Mark[i];
		Total += Mark[i];
	}
}

void Student::putdata(void)
{
	//std::cout << name << " " << age << " " <<Total << " " << cur_id << std::endl;
}

class Professor : public Person
{
	private:
		int Publication;
		int cur_id;
		
	public:
		void putdata(void);
		void getdata(void);	
};

void Professor::getdata(void)
{
	//std::cin >> name >> age >> Publication;
}

void Professor::putdata(void)
{
	//std::cout << name << " " << age << " " << Publication << " " << cur_id << std::endl;
}

int main(){

    int n, val;
    //std::cin>>n; //The number of objects that is going to be created.
    Person *per[2];
                per[0] = new Professor;
            per[0]->getdata(); 
/*
    for(int i = 0;i < n;i++)
	{
        std::cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
            per[i]->getdata(); 

        }
        else 
        {		
			per[i] = new Student; // Else the current object is of type Student
	
	        per[i]->getdata(); // Get the data from the user.
	    }
    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
*/
    return 0;

}
