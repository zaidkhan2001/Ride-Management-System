#include<iostream>
#include<fstream>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(diable:4996)
using namespace std;

class Name {
private:
	char* fName;
	char* lName;
public:
	//constructors
	Name();
	Name(char* fN, char* lN);
	Name(Name &obj);
	//setters
	void setfName(char* fN);
	void setlName(char* lN);
	void setname(char* fN, char* lN);
	//getters
	char* getfName() {
		if (fName != nullptr)
			return fName;
	}
	char* getlName() {
		if (lName != nullptr)
			return lName;
	}
	void settingname() {
		char* f = new char[20]; char* l = new char[20];
		cout << "Enter the first name\n";
		cin >> f;
		fName = new char[strlen(f) + 1];
		strcpy(fName, f);
	
		cout << "Enter the last name\n";
		cin >> l;
		lName = new char[strlen(l) + 1];
		strcpy(lName, l);

	}
	friend ostream& operator<<(ostream& out, const Name& n);
	//Destructor
	~Name();
};
//Default constructor
Name::Name() {
	fName = nullptr;
	lName = nullptr;
}
//Parametrized constructor
Name::Name(char* fN, char* lN) {
	fName = nullptr;
	lName = nullptr;
	if (fN != nullptr) {
		fName = new char[strlen(fN) + 1];
		strcpy(fName, fN);
	}
	if (lN != nullptr) {
		lName = new char[strlen(lN) + 1];
		strcpy(lName, lN);
	}
}
//Copy constructor
Name::Name(Name& obj) {
	cout << "Copy Constructor called...\n";
	fName = nullptr;
	lName = nullptr;
	fName = new char[strlen(obj.fName) + 1];
	strcpy(fName, obj.fName);
	lName = new char[strlen(obj.lName) + 1];
	strcpy(lName, obj.lName);
	/*fName = obj.fName;
	lName = obj.lName;*/
}
//Setters
void Name::setfName(char* fN) {
	fName = nullptr;
	if (fN != nullptr) {
		fName = new char[strlen(fN) + 1];
		strcpy(fName, fN);
	}
}
void Name::setlName(char* lN) {
	lName = nullptr;
	if (lN != nullptr) {
		fName = new char[strlen(lN) + 1];
		strcpy(lName, lN);
	}
}



void Name::setname(char* fN, char* lN) {
	fName = nullptr;
	if (fN != nullptr) {
		fName = new char[strlen(fN) + 1];
		strcpy(fName, fN);
	}
	lName = nullptr;
	if (lN != nullptr) {
		lName = new char[strlen(lN) + 1];
		strcpy(lName, lN);
	}
}
//ostream operation overloading
ostream& operator<<(ostream& out, const Name& n) {
	out << "Name: " << n.fName << " " << n.lName << endl;
	return out;
}
//Destructor
Name::~Name() {
if(this->fName!=nullptr&&lName!=nullptr){
	delete[]fName;
	delete[]lName;}
	fName = nullptr;
	lName = nullptr;
}

class Date {
private:
	int day;
	int month;
	int year;
public:
	//Constructors
	Date();
	Date(int d, int m, int y);
	Date(Date& obj);
	//Setters
	void settingdate();
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);
	void setdate(int d, int m, int y);
	void getdate(int& d, int& m, int& y) {
		d = this->day;
		m = this->month;
		y = this->year;
	}
	//Getters
	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }
	friend ostream& operator<<(ostream& out, const Date& d);
	//Destructor
	//~Date();
};
//Default constructor
Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}
//Parameterized constructor
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
//Copy constructor
Date::Date(Date& obj) {
	//cout << "Copy Constructor called...\n";
	day = obj.day;
	month = obj.month;
	year = obj.year;
}

void Date::settingdate() {
	int dt = 0; int mn = 0; int yr = 0;

	cout << "Enter in the format DD/MM/YYYY" << endl;
	cin >> dt;
	cin >> mn;
	cin >> yr;
	if (dt <= 0 && dt >= 31) { day = 1; }
	else setDay(dt);
	if (mn<= 0 && dt >= 12) { month = 1; }
	else setMonth(mn);
	if (yr <= 0) { year = 1990; }
	else setYear(yr);

}
//Setters
void Date ::setdate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::setDay(int d) { day = d; }
void Date::setMonth(int m) { month = m; }
void Date::setYear(int y) { year = y; }

//ostream operation overloading
ostream& operator<<(ostream& out, const Date& d) {
	out << "Date (day/Mon/Year): " << d.day << " / " << d.month << " / " << d.year << endl;
	return out;
}

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	//Constructors
	Time();
	Time(int h, int m, int s);
	Time(Time& obj);
	//Setters
	void setHour(int h);
	void setMin(int m);
	void setSec(int s);
	void settime(int h, int m, int s);
	//Getters
	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }
	friend ostream& operator<<(ostream& out, const Time& t);
	//Destructor
	//~Time();
};
//Default constructor
Time::Time() {
	hour = 0;
	min = 0;
	sec = 0;
}
//Parametrized constructor
Time::Time(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}
//Copy constructor
Time::Time(Time& obj) {
	cout << "Copy Constructor called...\n";
	hour = obj.hour;
	min = obj.min;
	sec = obj.sec;
}
//Setters
void Time::setHour(int h) { hour = h; }
void Time::setMin(int m) { min = m; }
void Time::setSec(int s) { sec = s; }
void Time::settime(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}
//ostream operation overloading
ostream& operator<<(ostream& out, const Time& t) {
	out << "Time(Hr:Min:Sec): " << t.hour << " : " << t.min << " : " << t.sec << endl;
	return out;
}



//feature

class Feature {
private:
	int fId;
	char* description;
	float cost;
public:
	Feature() {
		fId = 0;
		description = nullptr;
		cost = 0.0;
	}
	void set_fId(int temp) {
		fId = temp;
	}
	void set_description(char* temp) {
		description = new char[strlen(temp) + 1];
		strcpy(description, temp);
	}
	void set_cost(float temp) {
		cost = temp;
	}

	int get_fId() {
		return fId;
	}
	char* get_description() {
		return description;
	}
	float get_cost() {
		return cost;
	}


	void settingfeature() {
		int Fid = 0; float  Cost = 0; char arr[50];
		cout << "Enter the Feature id of the Vehicle \n";
		cin >> Fid; set_fId(Fid);
		cout << "Enter the Cost \n"; cin >> Cost; set_cost(Cost);
		cout << "Enter the Vehicle's Description\n";
		cin.ignore();
		cin.getline(arr, 50);
		set_description(arr);

	}


	friend ostream& operator<<(ostream& out, Feature& f) {
		out << "Feature ID : " << f.fId << endl;

		out << "Cost : " << f.cost << endl;
		if (f.description != nullptr)
			out << "Description : " << f.description << endl;
		return out;
	}

	~Feature() {

		if (this->description != nullptr) {
			delete[] description;
			description = nullptr;
		}
	}

};
//-------------------------------------






// persons
class Person {
private:
	Name pName;
	Date DOB;
	int Age;
	int Nid;
public:
	Person();
	Person(int age, int id, char* fN, char* lN, Date& D);
	//setter
	void setperson(int age, int id, char* fN, char* lN, Date& D);
	//getter
	void getperson(int &age, int& id, char*& fN, char*& lN,int &d,int&m,int&y) {
		fN = new char[strlen( pName.getfName())+1];
		strcpy(fN, pName.getfName());

		lN= new char[strlen(pName.getlName()) + 1];
		strcpy(lN, pName.getlName());

		d = DOB.getDay();
		m = DOB.getMonth();
		y = DOB.getYear();
		age = this->Age;
		id = this->Nid;
	}

	
	friend ostream& operator<<(ostream& out, Person& p) {
		out << p.pName;
		out << "DATE OF BIRTH = " << p.DOB;
		out << "AGE = " << p.Age << endl;
		out << "NATIONAL ID = " << p.Nid << endl;
		out << p.DOB << endl;
		return out;
	}
	void settingperson();
	virtual void print() {
		cout << pName;
		cout << "DATE OF BIRTH = " << DOB;
		cout << "AGE = " << Age << endl;
		cout << "NATIONAL ID = " << Nid << endl;
		cout << DOB << endl;
	}
	//add following functions in this class //Getter, Setters
	//Destructor, Default and Parametrized Constructor, Copy Constructor, Output
	//operator (print information of person)
};

void Person::settingperson() {
	int nid = 0; int a = 0;
	pName.settingname();
	DOB.settingdate();
	cout << "enter the ID : " << endl;
	cin >> nid; Nid = nid;
	cout << "Enter Age : \n";
	cin >> a;
	if (a <= 18) {
		Age = a;
	}
	else {
		Age = 18;
	}
}
void Person::setperson(int age, int id, char* fN, char* lN,Date&D) {
	Age = age;
	Nid = id;
	pName.setname(fN, lN);
	int d = D.getDay();
	int m = D.getMonth();
	int y = D.getYear();
	DOB.setdate(d, m, y);
}
Person::Person() {
	Age = 18;
	Nid = 0000;
}

Person::Person(int age, int id, char* fN, char* lN,Date&D) {
	Age = age;
	Nid = id;
	pName.setname(fN, lN);
	int d = D.getDay();
	int m = D.getMonth();
	int y = D.getYear();
	DOB.setdate(d, m, y);


}


//----------------------------------

class Service {
private:
	char* source;
	char* destination;
	float distance;
	Date bookingDate;
	Time bookingTime;
	bool status;
	float fuelrate;

	int cId;
	int dId;
	int vId;
public:
	
	Service() {
		 source=new char [20];
		 strcpy(source, "		");
		 destination=new char[20];
		 strcpy(destination, "		");
		 distance=0.0;
	 status=false;
	fuelrate=100.0;

	    cId=000;
		dId=000;
		vId=000;
	}
//assignment
	void operator=(Service& s) {
		source = new char[strlen(s.source) + 1];
		destination = new char[strlen(s.destination) + 1];
		strcpy(this->source, s.source);
		strcpy(this->destination, s.destination);
		this->fuelrate = s.fuelrate;
		this->cId = s.cId;
		this->vId = s.vId;
		this->dId = s.dId;
		this->status = s.status;
		this->bookingDate = s.bookingDate;
		this->bookingTime = s.bookingTime;
		this->distance = s.distance;
	 }


	void set_the_base(Service& s) {
		source = new char[strlen(s.source) + 1];
		destination = new char[strlen(s.destination) + 1];
		strcpy(this->source, s.source);
		strcpy(this->destination, s.destination);
		this->fuelrate = s.fuelrate;
		this->cId = s.cId;
		this->vId = s.vId;
		this->dId = s.dId;
		this->status = s.status;
		this->bookingDate = s.bookingDate;
		this->bookingTime = s.bookingTime;
		this->distance = s.distance;
	}
	virtual void printservice() {
		cout << " Source = " << source << endl;
		cout << "Destination = " <<destination << endl;
		cout << "Distance Covered = " << distance << endl;
		cout << "Date of Booking : " << bookingDate << endl;
		cout << "Booking Time : " << bookingTime << endl;
		if (status == true) {
			cout << "not-BOOKED";
		}
		cout << endl;
		cout << "Fuel Rate = " << fuelrate << endl;

		cout << "CID = " << cId << endl;
		cout << "DID = " <<dId << endl;
		cout << "VID = " << vId << endl;
		
	}

	friend ostream& operator<<(ostream& out, Service& S) {
		out<<" Source = "<< S.source<<endl;
		out<<"Destination = "<< S.destination<<endl;
		out << "Distance Covered = " << S.distance << endl;
		cout << "Date of Booking : " <<S.bookingDate << endl;
		cout<<"Booking Time : "<<S. bookingTime<<endl;
		if (S.status == true) {
			cout << "not-BOOKED";
		}
		cout << endl;
		cout << "Fuel Rate = " << S.fuelrate << endl;
	
		cout << "CID = " << S.cId << endl;
		cout << "DID = " << S.dId << endl;
		cout << "VID = " << S.vId << endl;
		return out;
	}

	void updateservice() {
		char sour[20]; char dest[20]; int d = 0; int m = 0; int y = 0;
		cout << "Enter the Source \n";
		cin.ignore();
		cin.getline(sour, 20);
		source = new char[strlen(sour) + 1];
		strcpy(source, sour);
		cout << "Enter the Destignation \n";
		cin.getline(dest, 20);
		destination = new char[strlen(dest) + 1];
		strcpy(destination, dest);
		cout << "Enter Distance" << endl;
		cin >> this->distance;
		cout << "now setting the date ,month ,year ... plz enter 1 by 1 " << endl;
		cin >> d; cin >> m; cin >> y;
		if (d > 0 && d <= 31) {
			bookingDate.setDay(d);
		}
		if (m > 0 && m <= 12) { bookingDate.setMonth(m); }
		if (y > 0) { bookingDate.setYear(y); }
		int h = 0; int min = 0; int sec = 0;
		cout << "enter the time in 24 - format HR/MIN//SEC" << endl;
		cin >> h; cin >> min; cin >> sec;
		if (h >= 0 && h < 24) { bookingTime.setHour(h); }
		if (min > 0 && min < 60) { bookingTime.setMin(min); }
		if (sec > 0 && sec < 60) { bookingTime.setSec(sec); }
		int s = 0; int c = 0; int D = 0; int v = 0;
		cout << "enter the status if booked press 0 else 1 " << endl;
		cin >> s;

		if (s == 0) { set_status(s); }
		if (s == 1) { set_status(s); }
		cout << " enter C-id\n";
		cin >> c;
		this->cId = c;
		cout << " enter D-id\n";
		cin >>D;
		this->dId = D;
		cout << " enter V-id\n";
		cin >> v;
		this->vId = v;
	}


	 
	//Setters
	void setservice(int C, int D, int V, float fuel, char* sour, char* dest, bool s) {
		source = new char[strlen(sour) + 1];
		strcpy(source, sour);
		destination = new char[strlen(dest) + 1];
		strcpy(destination, dest);
		cId = C;
		dId = D;
		vId = V;
		status = s;
		fuelrate = fuel;
	}
	void set_vehicle_id(int temp) {
		vId = temp;
	}
	void set_driver_id(int temp) {
		dId = temp;
	}
	void set_customer_id(int temp) {
		cId = temp;
	}
	void set_fuel_rate(float temp) {
		fuelrate = temp;
	}
	void set_distance(float temp) {
		distance = temp;
	}
	void set_status(int temp) {
		if (temp == 0) {
			status = false;
		}
		else {
			status = true;
		}
	}
	void set_destination(char* temp) {
		destination = temp;
	}
	void set_source(char* temp) {
		source = temp;
	}

	//Getters
	int get_vehicle_id() {
		return vId;
	}
	int get_driver_id() {
		return dId;
	}
	int get_customer_id() {
		return cId;
	}
	float get_fuel_rate() {
		return fuelrate;
	}
	float get_distance() {
		return distance;
	}
	bool get_status() {
		return status;
	}
	char* get_destination() {
		return destination;
	}
	char* get_source() {
		return source;
	}
};

class Ride : public Service {
private:
	int noofPassengers;
	bool ride_status;
	char* rideType;
	float DriverRanking;
	float VehicleRanking;
public:

	Ride() {
		noofPassengers = 0;
		ride_status = false;//false for pending true if complete
		rideType = nullptr;
		DriverRanking = 1;
		VehicleRanking = 1;
	}

	


	void settingtheride() {
		int num = 0; int state = 0; char arr[20]; float  rd = 0; float rv = 0;
		cout << "Enter the total no of Passenngers \n";
		cin >> num; set_no_of_passenger(num);
		cout << "Enter the Status of Ride 1 for Booked and 2 for Free\n";
		cin >> state;
		if (state == 1) {
			ride_status = true;
		}
		else ride_status = false;

		cout << "Enter the type of ride i.e  intercity or intracity \n";
		cin >> arr; set_ride_type(arr);
		cout << "enter the ratings of the driver for this ride \n";
		cin >> rd;
		cout << "enter the ratings of the vehicle for this ride \n";
		cin >>  rv;
		giveratings(rd, rv);
	}

	void giveratings(float dr, float vr) {
		if (dr >= 1 && dr <= 5) {
			DriverRanking = dr;
		}
		if (vr >= 1 && vr <= 5) {
			VehicleRanking = vr;
		}
	}



	//void setride_service(Service& s);

	friend ostream& ride(ostream& out, Ride& R) {
		
		out << " The Ride Data \n";
		out << "Total no of Passengers Carried : " << R.noofPassengers << endl;
		out << "Type of the Ride \n: " << R.rideType << endl;
		out << "Ride Status : ";
		if (R.ride_status == true) { out << "Booked\n"; }
		else out << "Not - Booked \n";
		R.Service::printservice();
		return out;
	}

	void printride() {
		cout << " The Ride Data \n";
		cout << "Total no of Passengers Carried : " << noofPassengers << endl;
		cout << "Type of the Ride \n: " <<rideType << endl;
		cout << "Ride Status : ";
		if (ride_status == true) { cout << "Booked\n"; }

		else cout << "Not - Booked \n";

		cout << "Vehicle Ranking = " << VehicleRanking << endl;
		cout << "Driver Ranking = " << DriverRanking << endl;
	}
	//Setters
	void set_no_of_passenger(int temp) {
		noofPassengers = temp;
	}
	void set_ride_status(bool temp) {
		ride_status = temp;
	}
	void set_ride_type(char* temp) {
		rideType =new char [strlen(temp)+1];
		strcpy(rideType, temp);
	}
	void set_driver_rating(float temp) {
		DriverRanking = temp;
	}
	void set_vehicle_rating(float temp) {
		VehicleRanking = temp;
	}

	//Getters
	int get_no_of_passenger() {
		return noofPassengers;
	}
	bool get_ride_status() {
		return ride_status;
	}
	char* get_ride_type() {
		return rideType;
	}
	float get_driver_rating() {
		return DriverRanking;
	}
	float get_vehicle_rating() {
		return VehicleRanking;
	}


	~Ride() {
		if (rideType != nullptr) {
			delete[] rideType;
		}

	}

	};

class Delivery : public Service {
private:
	float goodsWeight;
	char* goodsType;
	bool delivered;
public:

	Delivery() {
		goodsWeight = 0.0;
		goodsType = nullptr;
		delivered = false;
	}
	void settingdelivery() {
		char ptr[30];
		cout << "Enter the Weight of Goods You want to deliver in KG, Per KG cost is Rs 1000\n";
		cin >> goodsWeight;
		cout << "Enter the type of goods you want to deluiver eg food itmes, electronics etc\n";
		cin.getline(ptr,30);
		goodsType = new char[strlen(ptr + 1)];
		strcpy(goodsType, ptr);

	}

	
	void setdelivered(bool deliver) {
		delivered = deliver;
	}
	//Setters
	void set_weight(float temp) {
		goodsWeight = temp;
	}
	void set_goods_type(char* temp) {
		goodsType = temp;
	}

void get_delivery_status(bool&temp) {
	temp = delivered;
	}
	//Getters
	float get_weight() {
		return goodsWeight;
	}
	char* get_goods_type() {
		return goodsType;
	}
	//output
	void printdelivery() {
		cout << "The Weight of Goods : " << goodsWeight << endl;
		cout << "The Type of Goods : " << goodsType << endl;
		if (delivered == true) {
			cout << "GooDS Delivered\n";
		}
		else {
			cout << "Delivery not made yet\n";
		}
	}
};


//----------------------------
//driver
class Driver : public Person {
private:
	
	int dId;
	char** LicencesList;
	int noofLicences;
	float overallRanking;
	float salary;
	int experience;
	int servicesdone;
	int status; // 1 for free, 2 if booked and 3 if canceled
	Service** serviceHistory;
	int services;
	const char** lisence;
	int* lisencechecker;
	//Add services address in the array for tracking complete information of service.


public:





	Driver() {
	 dId=000;
	 noofLicences = 0;
		 LicencesList=new char*[7];
		 for (int i = 0; i < 7; i++) {
			 LicencesList[i] = new char[20];
		 }
		


		overallRanking=1;
		 salary=10000;
	 experience=1;
		status=1;
		services = 1;
		
		 serviceHistory=new Service*[services];
		for (int i = 0; i < services; i++) { serviceHistory[i] = new Service[1]; }
//		serviceHistory[0]->updateservice();
		// lisence 
		lisence = new const char* [7]; 
		for (int i = 0; i < 7; i++) { lisence[i] = new const char[30]; }
		lisence[0] = "Motor Car/Jeep"; lisence[1] = "Motorbike/Rickshaw"; lisence[2] = "HTV";
		lisence[3] = "LTV"; lisence[4] = "Tractor"; lisence[5] = "PSV"; lisence[6] = "International Drivers Permit";
		//checking the lisence
		lisencechecker = new int[7];
		for (int i = 0; i < 7; i++) 
		{ 
			lisencechecker[i] = 0;
		}
	}



	void set_lisencelist() {
		if (noofLicences <= 0) {
			noofLicences = 1;
		}

		for (int i = 0; i < noofLicences; i++) {
			strcpy(LicencesList[i], lisence[i]);
		}


	}
	float get_ratings_driver() {
		return overallRanking;
	}

	void get_driversstatus(bool& s) {
		if (status == 1 || status == 3) {
			s = true;
		}
		else { s = false; }

	}

	int get_noofservices() {
		return services;
	}
	//it will assign data

	void operator=(Driver& d) {

		int a = 0; int D = 0; int m = 0; int y = 0; int id = 0; char* f = new char[30]; char* l = new char[30];
		d.getperson(a, id, f, l, D, m, y);
		Date E; E.setdate(D, m, y);
		this->setperson(a, id, f, l, E);


		this->dId = d.dId;
		this->services = d.services;
		this->noofLicences = d.noofLicences;
		this->LicencesList = new char*[d.noofLicences];
		
		for (int i = 0; i < noofLicences; i++) {
			LicencesList[i] = new char[30];
		}
		for (int i = 0; i < noofLicences; i++) {
			strcpy(this->LicencesList[i], d.LicencesList[i]);
		}
		this->status = d.status;
		this->overallRanking = d.overallRanking;
		this->salary = d.salary;
		this->experience = d.experience;
		this->serviceHistory = new Service*[services];
		for (int i = 0; i < services; i++) {
			this->serviceHistory[i] = new Service[1];
		}

		for (int i = 0; i < services; i++) {
			this->serviceHistory[i][0].operator=(d.serviceHistory[i][0]);
		}

	}


	void set_nooflis(int a) {
		if (a > 0) {
			noofLicences = a;
		}
		else {
			noofLicences = 1;
		}
	}

	void setdriverservicelist(Service& s) {
		int a = services+1;

		Service** X = new Service * [a];
		for (int i = 0; i < a; i++) {
			X[i] = new Service[1];
		}
		int i = 0;
		if (serviceHistory[0][0].get_distance() != 0) {
			for (i = 0; i < services; i++) {
				X[i][0].operator=(serviceHistory[i][0]);
			}
			services++;
		}

			X[i][0].operator=(s);

			serviceHistory = new Service * [services];
			for (int i = 0; i < services; i++) {
				serviceHistory[i] = new Service[1];
			}
			for (int i = 0; i < services; i++) {
				serviceHistory[i][0].operator=(X[i][0]);
			}
		
			//services++;



	}


	void showservicesdone() {
		cout << "SERVICE HISTORY\n";
		for (int i = 0; i < services; i++) {
			cout << serviceHistory[i][0];
			cout << endl;
		}
	}

	int get_did() {
		return dId;
	}
	
	int get_lisences() {
		return this->noofLicences;
	}

	void get_driver_status(bool& sta) {
		sta = this->status;
	}

	void print_only_driver() {
		Person::print();

		cout << "Driver ID = " << dId << endl;
		cout << "Over All Rating = " << overallRanking << endl;
		cout << "Experience of the Driver = " << experience << endl;
		
	}
	int  take_lisence(){
		int lic = 1;
	cin >> lic;
	if (lic <= 0) { lic = 1; }
	return lic;
	}
	void set_driver() {
		int id = 0; int exp = 0; float rank = 0; 
		settingperson();
		cout << "enter the driver id\n";
		cin >> id; set_dID(id);
		cout << "enter the driver's experience\n";
		cin >> exp; set_experience(exp);
		cout << "enter the drivers ranking\n ";
		cin >> rank;  set_rank(rank);
//		cin.ignore();
		cout << "enter the no of lisences owned by the driver\n";
		
		int lic = take_lisence();
		for (int i = 0; i < lic; i++) {
			int A = makechoice();
			updatelisencelist(A);
		}
		int s = 1;
		cout << "enter the no of services down by the driver " << endl;
		cin >> s; ;
		/*serviceHistory = new Service * [services];
		for (int i = 0; i < services; i++) { serviceHistory[i] = new Service[1]; }*/
		for (int i = 0; i < s; i++) {
			if (i == 0) {
				this->updatethehistory(i);
			}
			else {

				this->addservice();

			}
		}

	/*	showservicesdone();
		printlisences();*/
	}

	int makechoice() {
		int a = 0;
		cout << "Press 1 for lisence of Motor Car/Jeep \n";
		cout << "Press 2 for lisence of Motor Bike /Rickshaw \n";
		cout << "Press 3 for lisence of HTV \n";
		cout << "Press 4  for lisence of LTV \n";
		cout << "Press 5 for lisence of Tractor\n";
		cout << "Press 6 for lisence of PSV \n";
		cout << "Press 7 for lisence of International Drivers \n";
		cin >> a;
		return a;
	}
	void updatelisencelist(int x) {
		int choice=0;
		
		//cin >> choice;

		
		int a = x - 1;
		if (a >= 0 && a < 7) {
			if (lisencechecker[a] == 0) {
				strcpy(LicencesList[noofLicences], lisence[a]);
				noofLicences++;
				lisencechecker[a] = 1;
			}
		}



	}

	//add following functions in this class
	void set_dID(int d) {
		dId = d;
		
	}


	
	void printlisences() {
		cout << "Lisences Owned By the Driver = "<<noofLicences<<endl;
		for (int i = 0; i < noofLicences; i++) {
			cout << LicencesList[i] << endl;
		}
	}
	void updatethehistory(int i) {

		serviceHistory[i]->updateservice();
	}
	
	void set_rank(float rank) {
		overallRanking = rank;
	}
	int get_salary() {
		return salary;
	}
	void set_salary(float s) {
		salary = s;
	}
	void set_experience(int exp) {
		experience = exp;
	}
	void set_status(int stat) {
		status = stat;
	}
	int  get_experience() {
		return experience;
	}

	void set_lisences(char* lisenceno, char* arr) {
		strcpy(lisenceno, arr);
		noofLicences++;
	}


	void addservice() {
		int x = services;
		services++;

		Service** hist = new Service * [services];
		for (int i = 0; i < services; i++) {
			hist[i] = new Service[1];
		}
		int i = 0;
		for (i = 0; i < x; i++) {
			hist[i][0].operator=(serviceHistory[i][0]);

		}
		hist[i][0].updateservice();
		serviceHistory = nullptr;
		serviceHistory = new Service * [services];
		for (int i = 0; i < services; i++) { serviceHistory[i] = new Service[1]; }
		for (int j = 0; j < services; j++) {
			serviceHistory[j][0].operator=(hist[j][0]);
		}
	}

	void pendingservices() {
		if (services > 0) {
			cout << "Pending  Services : \n";
		}
		bool cancel = false;

		for (int i = 0; i < services; i++) {
			cancel = serviceHistory[i][0].get_status();
			if (cancel == false) {
				cout << serviceHistory[i][0];
				cout << endl;
			}
		}

	}
	friend ostream& operator<<(ostream& out, Driver& D) {
	D.print();
	
	out << "ID : " << D.dId << endl;
	out << "Rating :  " << D.overallRanking << endl;
	out << "Experience : " << D.experience << endl;
	out << "Lisence History : \n "; 
	D.printlisences(); cout << endl;
	out << "Service History : \n";
	D.showservicesdone();
	out << endl;
	return out;
	}
	//Getter, Setters
	//Destructor, Default and Parameterized Constructor, Copy Constructor, Output
	//operator (prints complete information of Driver)
};



//customer

class customer :public Person{

	int cid;

	Service** bookinghistory;
	int bookings;

public:
	
	customer() {
		cid = 000;
		bookings =1;
		bookinghistory = new Service * [bookings];
		for (int i = 0; i < bookings; i++) {
			bookinghistory[i] = new Service[bookings];
		}
	}
	
	void set_customer();
	void sethistory(Service** Arr, int size) {
		bookinghistory = nullptr;
		bookinghistory = new Service * [size];
		for (int i = 0; i < size; i++) { bookinghistory[i] = new Service; }

		bookinghistory = Arr;

	}
	int get_id() {
		return cid;
	}
	void set_cid(int temp) {
		cid = temp;
	}

	int getcustomersid() {
		return cid;
	}

	void operator=(customer& C) {
		int id = 0; int d = 0; int m = 0; int y = 0; int a = 0; char* f = new char[30]; char* l = new char[30];
		Date E;

		C.getperson(a, id, f, l, d, m, y);
		E.setdate(d, m, y);
		this->setperson(a, id, f, l, E);
		this->cid = C.cid;
		this->bookings = C.bookings;
		this->bookinghistory = new Service * [C.bookings];
		for (int i = 0; i < bookings; i++) {
			this->bookinghistory[i] = new Service[1];
		}
		for (int i = 0; i < this->bookings; i++) {
			this->bookinghistory[i][0] = C.bookinghistory[i][0];
		}



	}



	void updatethehistory(int i) {
		
		bookinghistory[i]->updateservice();
	}

	void setcustomerservicelist(Service& s) {
		int a = bookings + 1;

		Service** X = new Service * [a];
		for (int i = 0; i < a; i++) {
			X[i] = new Service[1];
		}
		int i = 0;
		if (bookinghistory[0][0].get_distance() != 0) {
			for (i = 0; i < bookings; i++) {
				X[i][0].operator=(bookinghistory[i][0]);
			}
			bookings++;
		}

		X[i][0].operator=(s);

		bookinghistory = new Service * [bookings];
		for (int i = 0; i < bookings; i++) {
			bookinghistory[i] = new Service[1];
		}
		for (int i = 0; i <bookings; i++) {
			bookinghistory[i][0].operator=(X[i][0]);
		}

		//services++;



	}
	void addhistory() {
		int x = bookings;
		bookings++;

		Service** hist = new Service * [bookings];
		for (int i = 0; i < bookings; i++) {
			hist[i] = new Service;
		}
		int i = 0;
		cout << bookinghistory[0][0];
		for (i = 0; i < x; i++) {
			hist[i][0].operator=(bookinghistory[i][0]);

		}
		hist[i]->updateservice();
		bookinghistory = nullptr;
		bookinghistory = new Service * [bookings];
		for (int i = 0; i < bookings; i++) { bookinghistory[i] = new Service; }
		for (int j = 0; j < bookings; j++) {
			bookinghistory[j][0].operator=(hist[j][0]);
		}


	}
	

	void showhistory() {
		cout << "BOOKING HISTORY" << endl;
		for (int i = 0; i < bookings; i++) {
			cout << "Booking no : " << i + 1 << endl;
			cout << bookinghistory[i][0];
		}
	}

	void cancelledbookings() {
		if (bookings > 0) {
			cout << "Bookings Cancelled : \n";
		}
		bool cancel = false;

		for (int i = 0; i < bookings; i++) {
			cancel = bookinghistory[i][0].get_status();
			if (cancel == false) {
				cout << bookinghistory[i][0];
				cout << endl;
			}
		}


	}
	void print_only_cust() {
		Person::print();
		cout << "Customer ID = " << cid << endl;
	}


	friend ostream& operator<<(ostream& out, customer& C) {

		C.print();
		out << "Customer ID = " << C.cid << endl;
		out << "Total bookings made = "<<C.bookings<<endl;
		C.showhistory();
		return out;




	}
};





void customer::set_customer() {
	int custid = 0; int b = 0;
	settingperson();
	cout << "Enter the Customer ID\n";
	cin >> custid; set_cid(custid);

	cout << "Enter the Number of Bookings Made by Customer\n";
	cin >> b;
	for (int i = 0; i < b; i++) {
		cout << "booking no " << i + 1 << endl;
		if (i == 0) {
			updatethehistory(i);
		}
		else {
			addhistory();
		}
	}
	




}



class Vehicle {

	int vid;
	int registrationNo;
	float avgmilage;
	char* lisencetype;
	bool status;//false for free
	char* fueltype;
	float overallranking;
	Date manufacturingDate;
	Feature* list;
	Service** servicehistory;
	int services;
	int lno;
public:



	//constructor
	Vehicle();
	
	int get_vid_() {
		return vid;
	}
	float get_avgmilage() {
		return avgmilage;
	}
	int get_regis_no(){
		return registrationNo;
	}
	char* get_fueltype(){
		return fueltype;
	}
	char* get_type_lisence(){
		return lisencetype;
	}
	float get_ranking_() {
		return overallranking;
	}
	int getlno() {
		return lno;
	}

	void set_mile(float a) {
		avgmilage = a;
	}

	void get_date_make(int& d, int& m, int& y) {
		manufacturingDate.getdate(d, m, y);
	}
	void set_date_make(int d, int m, int y) {
		manufacturingDate.setdate(d, m, y);
	}
	void get_feature(int&a,char*&s,int&fid) {
		a=list->get_cost();
		char* b = new char[30];
		b = list->get_description();
		s=new char[strlen(list->get_description())];
		strcpy(s, list->get_description());
		fid = list->get_fId();


	}
	void setlno(int temp) {
		lno = temp;
	}
	void set_lis(int lno) {
		lno = lno - 1;
		const char** lisence;
		lisence = new const char* [7];
		lisencetype = new char[20];
		for (int i = 0; i < 7; i++) { lisence[i] = new const char[30]; }
		lisence[0] = "Motor Car/Jeep"; lisence[1] = "Motorbike/Rickshaw"; lisence[2] = "HTV";
		lisence[3] = "LTV"; lisence[4] = "Tractor"; lisence[5] = "PSV"; lisence[6] = "International Drivers Permit";
		strcpy(lisencetype ,lisence[lno]);

	}
	void set_feature(int a, char* s, int fid) {
		list->set_cost(a);
		list->set_description(s);
		list->set_fId(fid);
	}
	void set_lisencetype(char*temp) {
		lisencetype = new char[strlen(temp)];

		strcpy(lisencetype, temp);
	}
	//for lisence
	int makechoice() {
		int a = 0;
		cout << "Press 1 for lisence of Motor Car/Jeep \n";
		cout << "Press 2 for lisence of Motor Bike /Rickshaw \n";
		cout << "Press 3 for lisence of HTV \n";
		cout << "Press 4  for lisence of LTV \n";
		cout << "Press 5 for lisence of Tractor\n";
		cout << "Press 6 for lisence of PSV \n";
		cout << "Press 7 for lisence of International Drivers \n";
		cin >> a;
		return a;
	}
	int get_vehicle_id() {
		return vid;
	}

	bool set_status(bool t) {
		status = t;
	}
	//set Vehicle
	void settingvehicle();
	//gives category based on feature
	int  get_category() {
		int a=list->get_fId();
		return a;
	}
	void setvehicleservicelist(Service& s) {
		int a = services + 1;

		Service** X = new Service * [a];
		for (int i = 0; i < a; i++) {
			X[i] = new Service[1];
		}
		int i = 0;
		if (servicehistory[0][0].get_distance() != 0) {
			for (i = 0; i < services; i++) {
				X[i][0].operator=(servicehistory[i][0]);
			}
			services++;
		}

		X[i][0].operator=(s);

		servicehistory = new Service * [services];
		for (int i = 0; i < services; i++) {
			servicehistory[i] = new Service[1];
		}
		for (int i = 0; i < services; i++) {
			servicehistory[i][0].operator=(X[i][0]);
		}

		//services++;



	}


	void set_fueltype(char* temp) {
		fueltype = new char[strlen(temp)];
		strcpy(fueltype, temp);


	}

	void set_regis(int a) {
		registrationNo = a;
	}
	void set_ranking(float r) {
		overallranking = r;
	}
	void set_vid(int v){
		vid = v;
	}
	void print_veh_only() {
		cout << "Vehicle ID : " << vid << endl;
		cout << "Registration no : " << registrationNo << endl;
		cout << "The Average Mileage : " << avgmilage << endl;
		cout << "The OverAll Rating of Vehicle :" << overallranking << endl;
		cout << "The Data of Manufacturing : " << manufacturingDate;
		cout << "The Lisence Required to Drive the Vehicle : " <<lisencetype << endl;
		cout << endl;
		cout << "Status : ";
		if (status == true) { cout << "BOOKED\n"; }
		else cout << "NOT - BOOKED\n";
	}
	friend ostream& operator<<(ostream& out, Vehicle v) {
		out << "Vehicle ID : " << v.vid << endl;
		out << "Registration no : " << v.registrationNo << endl;
		out << "The Average Mileage : " << v.avgmilage << endl;
		out << "The OverAll Rating of Vehicle :" << v.overallranking << endl;
		out << "The Data of Manufacturing : " << v.manufacturingDate;
		cout << "The Lisence Required to Drive the Vehicle : " << v.lisencetype << endl;
		out << endl;
		out << "Status : "; 
		if (v.status == true) { cout << "BOOKED\n"; }
		else cout << "NOT - BOOKED\n";
		out << "Services History : \n";
		for (int i = 0; i < v.services; i++) {
			cout << v.servicehistory[i][0] << endl;
		}

		out << "Features of Vehicle\n ";
		out << v.list[0] << endl;
	
		return out;
	}


	void setstatus(int temp) {
		if (temp == 1) { status = true; }
		else status = false;
	}

	bool getvehiclestatus() {
		return status;
	}

	void updatethehistory(int i) {

		servicehistory[i]->updateservice();
	}

	void addservice();
};



void Vehicle::addservice() {

	int x = services;
	services++;

	Service** hist = new Service * [services];
	for (int i = 0; i < services; i++) {
		hist[i] = new Service[1];
	}
	int i = 0;
	for (i = 0; i < x; i++) {
		hist[i][0].operator=(servicehistory[i][0]);

	}
	hist[i][0].updateservice();
	servicehistory = nullptr;
	servicehistory = new Service * [services];
	for (int i = 0; i < services; i++) { servicehistory[i] = new Service[1]; }
	for (int j = 0; j < services; j++) {
		servicehistory[j][0].operator=(hist[j][0]);
	}
}

//constructor
Vehicle::Vehicle() {
	vid = 000;
	registrationNo = 123;
	avgmilage = 0.0;
	lisencetype = nullptr;
	status = false;
	fueltype = nullptr;
	overallranking = 1.0;
	manufacturingDate.setdate(1, 1, 1990);
	list = new Feature;
	lno = 1;
	services = 1;

	servicehistory = new Service * [services];
	for (int i = 0; i < services; i++) {
		servicehistory[i] = new Service[1];
	}
}
//set Vehicle
void Vehicle::settingvehicle() {
	char arr[10]; const char** lisence;
	lisence = new const char* [7];
	int l = 0;
	for (int i = 0; i < 7; i++) { lisence[i] = new const char[30]; }
	lisence[0] = "Motor Car/Jeep"; lisence[1] = "Motorbike/Rickshaw"; lisence[2] = "HTV";
	lisence[3] = "LTV"; lisence[4] = "Tractor"; lisence[5] = "PSV"; lisence[6] = "International Drivers Permit";
	cout << "Enter the Vehicle ID\n";
	cin >> vid;
	cout << "Enter the Registration No:\n";
	cin >> registrationNo;
	cout << "Enter the Average Mileage of Vehicle \n";
	cin >> avgmilage;
	cout << "Enter the Type of Lisence Required to Driver the Car\n";
	l = makechoice();
	lno = l;
	if (l >= 1 && l <= 7) {
		lisencetype = new char[strlen(lisence[l - 1] + 1)];
		strcpy(lisencetype, lisence[l - 1]);
	}
	else {
		lisencetype = new char[strlen(lisence[0] + 1)];
		strcpy(lisencetype, lisence[0]);

	}
	cout << "Enter the Over All Ranking Of Vehicle \n";
	cin >> overallranking;
	cout << "Enter the Fuel Type of Vehicle\n";
	cin >> arr;
	fueltype = new char[strlen(arr) + 1];
	strcpy(fueltype, arr);
	cout << "Enter the Date of Manufactuing\n";
	manufacturingDate.settingdate();

	int s = 0;
	cout << "Enter  the Status of Vehicle 0 for free , 1 for booked \n";
	cin >> s;
	if (s == 1) { status = true; }
	else status = false;
	int b = 0;
	cout << "Enter the No of Services Done by the Vehicle \n";
	cin >> b;
	for (int i = 0; i < b; i++) {
		if (i == 0) {
			this->updatethehistory(i);
		}
		else {
			addservice();
		}

	}


	cout << "Entering the Features of Vehicle\n";
	list->settingfeature();







}








void add_driver(Driver& d) {

	d.set_driver();
}


void add_customer(customer& c) {
	c.set_customer();
}


void add_vehicle(Vehicle& v) {
	v.settingvehicle();
}



//
int getcustomer(customer* c, int num, int id) {
	int i = 0;
	int x = 0;
	for (i = 0; i < num; i++) {
		x = c[i].getcustomersid();
		if (x == id) {

			return i;
			break;
		}
	}

	if (i >= num && c[i].get_id() != id) {
		return -1;
	}

}
int getvehicle(Vehicle* c, int num, int id) {
	int i = 0;
	int x = 0;
	for (i = 0; i < num; i++) {
		x = c[i].get_vehicle_id();
		if (x == id) {

			return i;
			break;
		}
	}

	if (i >= num && c[i].get_vehicle_id() != id) {
		return -1;
	}
}
void remove_customer(customer*& C, int& num, int id, bool& remove, int& total) {
	int x = getcustomer(C, num, id);
	remove = false; int z = 0;
	int a = num;
	int count = 0;
	customer* temp = new customer[total ];
	if (x != -1) {
		int i = 0;
		while (i < a) {
			if (i != x) {
				temp[count].operator=(C[i]);
				count++;

			}
			i++;
		}

		C = nullptr;
		C = new customer[total];
		for (int j = 0; j < count; j++) {
			C[j].operator=(temp[j]);
		}
		remove = true;
		num = num - 1;
		total=total;
	}

}

//searching on base of id


//searching on base of id

int   getdriver(Driver *D,int num,int id) {
	int i = 0;
	int x = 0;
	for ( i = 0; i < num; i++) {
		x = D[i].get_did();
		if (x == id) {
			
			return i;
			break;
		}
	}

	if (i >= num && D[i].get_did() != id) {
		return -1;
	}




}


//removing a driver

void remove_driver(Driver*& D, int& num, int id,bool &remove,int &total) {
	int x = getdriver(D, num, id);
 remove = false; int z = 0;
	int a = num;
	int count = 0;
	Driver* temp = new Driver[total];
	if (x !=- 1) {
		int i = 0;
		while (i < a) {
			if (i != x) {
				temp[count].operator=(D[i]);
				count++;

			}
			i++;
		}

		D = nullptr;
		D = new Driver[total];
		for (int j = 0; j < count; j++) {
			D[j].operator=(temp[j]);
		}
		remove = true;
		num = num - 1;
		
	}

}


// drivers with rankings above 4.5
void highrankdrivers(Driver*& D, int count) {

	cout << "Drivers With Rating Above & 4.5 : \n";
	float a = 0; int x = 1;
	for (int i = 0; i < count; i++) {
		a = D[i].get_ratings_driver();
		if (a >= 4.5 && a <= 5) {
			cout << "Driver No : " << x << endl;
			cout << D[i];
			cout << endl;
			x++;
		}
	}
}

//cost computation

float getcost(Service& S) {
	float dist = S.get_distance();
	float fuel = S.get_fuel_rate();
	float cost = dist * fuel;
	return cost;
}

//drivers with multiple lisences

void driverwithmultiplelisence(Driver* D, int count) {
	int num = 0;

	for (int i = 0; i < count; i++) {
		num = D[i].get_lisences();
		if (num > 1&&num<=7) {
			D[i].print_only_driver();
			D[i].printlisences();
		}

	}


}

//pending and cancelled services
void pendingdriverservices(Driver *c,int count) {
	int id = 0;
	cout << "enter the Drivers ID " << endl;
	cin >> id;
	int x =getdriver(c, count, id);

	if (x != -1) {
		c[x].pendingservices();
	}
	else {
		cout << "No record to show\n";
	}
}

void cancelledbookingsbycustomer(customer*c,int count) {
	int id = 0;
	cout << "enter the Customers ID " << endl;
	cin >> id;
	int x = getcustomer(c, count, id);

	if (x != -1) {
		c[x].cancelledbookings();
	}
	else cout << "No Record Available\n";
}

//vehiclewithcategory
void vehiclewithcategory(Vehicle * V,int count) {
	int a = 0; int id = 0;
	cout << "Enter The Catregory of Vehicles i.e Enter the Feature ID\n";
	cin >> id;

	for (int i = 0; i < count; i++) {
		a = V[i].get_category();
		if (a == id) {
			cout << "Vehicle : \n";
			cout << V[i];
			cout << endl;
		}

		
	}
	


}




int  select_a_driver(Driver* D, int count) {
	int index = 0; bool status = false;;
	cout << "THE LIST OF FREE - DRIVERS \n";

	for (int i = 0; i < count; i++) {

		D[i].get_driversstatus(status);
		if (status == true) {
			cout << D[i];
		}



	}

	int choice = 0;
	cout << "Please Enter the Drivers ID who you want as Your rider\n";
	cin >> choice;

	int x = getdriver(D, count, choice);

	return x;









}

int  select_a_vehicle(Vehicle* D, int count) {
	int index = 0; bool status = false;;
	cout << "THE LIST OF FREE - VEHICLE \n";

	for (int i = 0; i < count; i++) {

		status=D[i].getvehiclestatus();
		if (status == false) {
			cout << D[i];
		}



	}

	int choice = 0;
	cout << "Please Enter the Vehicle ID \n";
	cin >> choice;

	int x = getvehicle(D, count, choice);

	return x;









}



void book_a_service( Vehicle* v, int veh,customer* c, int customerno, Driver* D, int driver) {
	Service S; 
	int choice = 0;
	while (choice != 1&& choice != 2) {
		cout << "Dear customer Please enter the type of service you want\n";
		cout << "Press 1 for Booking Ride\n";
		cout << "Press 2 for Delivery Service \n";
		cin >> choice;
	}
	int cid = 0;
	cout << "Enter the id of customer \n";
	cin >> cid;
	int C = getcustomer(c, customerno, cid);
	int a = select_a_driver(D, driver); int did = 0; int cd = 0; int vd = 0;
	int V = select_a_vehicle(v, veh);
	if (a != -1&&C!=-1&&V!=-1) {
		if (choice == 1) {
			S.updateservice();
			 did = D[a].get_did();
			 cd = c[C].getcustomersid();
			 vd = v[V].get_vehicle_id();
			S.set_driver_id(did);
			S.set_customer_id(cd);
			S.set_vehicle_id(vd);
			cout << "Now Enter the Ride data \n";
			Ride R;
			R.settingtheride();
			R.set_the_base(S);
			cout << "Ride Info : \n";
			cout << R;
			int finalchoice = 0;

			cout << "Your Ride is Booked Press 1 to Proceed or Press any key to cancel\n";
			cin >> finalchoice;
			if (finalchoice == 1) {
				D[a].setdriverservicelist(S);
				D[a].set_status(2);
				c[a].setcustomerservicelist(S);
				v[V].setvehicleservicelist(S);
				v[V].setstatus(1);
				cout << "The Cost of this Service you booked is : " << getcost(S);
				cout << "\nRide Booked Successfully Driver will arrive in few mintutes\n";

			}
			else {
				cout << "The Cost of this Service you cancdelled was : " << getcost(S);
				cout << "THE RIDE is CANCELLED YOU WILL BE CHARGED 5 % of Ride charges \n";
				int a = getcost(S);
				a = (a) * 0.05;
				cout << "RS :" << a << " - the deducted charged" << endl;
				S.set_status(0);
				c[a].setcustomerservicelist(S);

			}




		}
		if (choice == 2) {
			cout << "You Booked Delivery Service\n";
			S.updateservice();
			did = D[a].get_did();
			cd = c[C].getcustomersid();
			vd = v[V].get_vehicle_id();
			S.set_vehicle_id(vd);
			S.set_driver_id(did);
			S.set_customer_id(cd);
			cout << "NOW ENTER THE DELIVERY DATA \n";
			Delivery E;
			E.settingdelivery();
			E.set_the_base(S);
			cout << " Delivery charges are : " << endl;
			float e = E.get_weight() * 1200;
			cout << "DELIVERY INFO : " << endl;
			cout << E;
			cout << endl;
			
			int final = 0;
			
			cout << "Your Delivery  is Booked !... Press 1 to Proceed or Press any key to cancel\n";
			cout << "ON cancellation service charges i.e 5% will be deducted\n";
			cin >> final;
			if (final == 1) {
				cout << "Delivery BOOKED !\n";
				cout << " Delivery charges are : " << endl;
				 e = E.get_weight() * 1200;
				 D[a].setdriverservicelist(S);
				 c[C].setcustomerservicelist(S);



			}
			else {
				cout << "Delivery Cancelled !\n";
				cout << " Charges deducted are : ";
				e = E.get_weight() * 1200;
				c[C].setcustomerservicelist(S);
				cout <<  e - (e * 0.05) << endl;
			}
		}
	}


}


void update_salaries(Driver* D, int count) 
{
	int did = 0; int salary = 0; float r = 0;
	cout << "Enter the id of Driver \n";
	cin >> did;
	int x = getdriver(D, count, did);
	if (x != -1) {
		cout << "Enter the New Rating of driver\n";
		cin >> r;
		D[x].set_rank(r);
		cout << "Enter the New Salary of Driver (Update)\n";
		cin >> salary;
		D[x].set_salary(salary);
		cout << "Data After Updating Credits\n";
		D[x].print_only_driver();
		cout << "salary= " << salary << endl;
	}
	else cout << "No driver found-\n";
}


void savedrivers(Driver* D, int count) {
	int d = 0; int m = 0; int y = 0;
	char* f = new char[30];
	char* l= new char[30];
	int a = 0; int id = 0;
	ofstream file;
	file.open("Driver.txt");
	if (file) {
		file << count << endl;
		for (int i = 0; i < count; i++) {
			D[i].getperson(a, id, f, l, d, m, y);
			file << a<<endl<<id<<endl<<d<<endl<<m<<endl<<y<<endl;
			file << endl;
			file << f << endl;
			file << l << endl;
			file << D[i].get_did()<<endl;
			int a = D[i].get_ratings_driver();
			file << a << endl;
			file << D[i].get_lisences()<<endl;
			file << D[i].get_experience()<<endl;
			file << D[i].get_salary()<<endl;
			//D[i].set_lisencelist();

		}


		file.close();

	}
}


void readdrivers(Driver* D, int& count) {
	int did = 0;
	char* f = new char[20]; char* l = new char[20];
	int a = 0; int d = 0; int m = 0; int y = 0;
	int id = 0; float rate = 0; int sal = 0; int exp = 0;
	int L = 0;
	ifstream file;
	file.open("Driver.txt");
	if (file) {
		file >> count;
		for (int i = 0; i < count; i++) {
			file >> a; file >> id; file >> d; file >> m; file >> y;
			file >> f;
			file >> l;
			Date e; e.setdate(d, m, y);
			D[i].setperson(a, id, f, l, e);
			file >> did;
			D[i].set_dID(did);
			file >> rate; D[i].set_rank(rate);
			file >> L; D[i].set_nooflis(L);
			D[i].set_lisencelist();
			file >> exp;
			D[i].set_experience(exp);
			file >> sal;
			D[i].set_salary(sal);

		}

	}





}


void save_customers(customer* c, int count) {
	int d = 0; int m = 0; int y = 0;
	char* f = new char[30];
	char* l = new char[30];
	int a = 0; int id = 0;

	ofstream file;
	file.open("customer.txt");
	file << count<<endl;
	for (int i = 0; i < count; i++) {
		c[i].getperson(a, id, f, l, d, m, y);
		file << a << endl << id << endl << d << endl << m << endl << y << endl;
		file << endl;
		file << f << endl;
		file << l << endl;
		file << c[i].getcustomersid() << endl;

	}
	file.close();


}

void read_customers(customer* D, int& count) {
	int did = 0;
	char* f = new char[20]; char* l = new char[20];
	int a = 0; int d = 0; int m = 0; int y = 0;
	int id = 0; float rate = 0; int sal = 0; int exp = 0;
	int L = 0;
	ifstream file;
	file.open("customer.txt");
	if (file) {
		file >> count;
		for (int i = 0; i < count; i++) {
			file >> a; file >> id; file >> d; file >> m; file >> y;
			file >> f;
			file >> l;
			Date e; e.setdate(d, m, y);
			D[i].setperson(a, id, f, l, e);
			file >> did;
			D[i].set_cid(did);
		}
	}
}


void save_vehicle(Vehicle* D, int count) {
	int vid = 0;
	int d = 0; int m = 0; int y = 0;
	char* f = new char[30];
	int fid = 0;
	int cost = 0;
		ofstream file;
	file.open("vehicle.txt");
	file << count << endl;
	for (int i = 0; i < count; i++) {
		file << D[i].get_vid_() << endl;
		file << D[i].get_regis_no() << endl;
		file << D[i].get_avgmilage()<<endl;
		file << D[i].get_ranking_() << endl;
		file << D[i].get_fueltype() << endl;
	
		D[i].get_date_make(d, m, y);
		file << d << endl << m << endl << y << endl;
		file << D[i].getlno() << endl;
		D[i].get_feature(cost, f, fid);
		file << cost << endl;
		file << fid << endl;
		
		file << f << endl;
		

	}
	
}

void read_vehicle(Vehicle* D, int& count) {
	
	int d = 0; int m = 0; int y = 0; int fid = 0; int vid = 0; int regis = 0;float  avgmile = 0;
	char* f = new char[50];
	char* l = new char[30];
	char* fuel = new char[30];
	float rank = 0;
	int cost = 0;
	ifstream file;
	file.open("vehicle.txt");
	int x = 0;
	file >> count;
	for (int i = 0; i < count; i++) {
		file >> vid; D[i].set_vid(vid);
		file >> regis; D[i].set_regis(regis);
		file >> avgmile; D[i].set_mile(avgmile);
		file >> rank; D[i].set_ranking(rank);
		file >> fuel; D[i].set_fueltype(fuel);
		
		file >> d;
		file >> m;
		file >> y;
		D[i].set_date_make(d, m, y);
		file >> x;
		D[i].setlno(x);
		D[i].set_lis(x);
		file >> cost;
		file >> fid;
		file >> f;
		D[i].set_feature(cost, f, fid);
		/*
		file >> l;
		D[i].set_lisencetype(l);*/
	}




	float rating = 0;
	
}
int main() {
	bool remove = false; int num = 0;
	Driver* D = new Driver[10]; int totaldriver = 10;
	customer* C = new customer[15]; int totalcustomer = 15; int q = 0;
	Vehicle* V = new Vehicle[20]; int totalvehicle = 20;
	int driver = 0; int cust = 0; int veh = 0;
	while (num != -1) {
		cout << "Welcome!, Khush Amdeeddd! , Pakhair Raglay! _-_ to Fast NU - Uber\n";
		cout << "PRESS 1 TO ADD A Driver \n";
		cout << "PRESS 2 TO ADD A Vehicle \n";
		cout << "PRESS 3 TO ADD A Customer \n";
		cout << "PRESS 4 TO Remove A Driver  \n";
		cout << "PRESS 5 TO Remove A Customer  \n";
		cout << "Press 6 to Print All Drivers\n";
		cout << "Press 7 to Print All Customers\n";
		cout << "Press 8 to Print Drivers with Multiple Lisences\n";
		cout << "Press 9 to For A Service Request\n";
		cout << "Press 10 to Print All Drivers  with 4.5 & Above Rating\n";
		cout << "Press 11 to Print Data Of A Special Particular vehicle wrt Category\n";
		cout << "Press 12 to Print Complete Data of A Specific DRIVER\n";
		cout << "Press 13 to Print Complete Data of A Specific VEHICLE\n";
		cout << "Press 14 to Print Complete Data of A Specific CUSTOMER\n";
		cout << "Press 15 to Get The Info of All Pending or Cancdelled Services of a Driver\n";
		cout << "Press 16 to Print All the Vehicles\n ";
		cout << "Press 17 to Update Rankings & Salaries  of a Driver\n ";
		cout << "Press 18 to Print Cancelled Bookings  of A Customer\n";
		cout << "Press 19 to Load the Data Base\n";
		cout << "Press 20 to Print Only Drivers(not history)\n";
		cout << "Print 21 to Print The Main Data of Vehicles\n";
		cout << "Press 22 to Print Only the Customers(not history)\n";
		cout << "Press -1 to exit\n";
		cin >> num;


		if (num == 22) {
			if (cust >= 1) {
				for (int i = 0; i < cust; i++) {
					cout << "Customer no " << i + 1 << endl;
					C[i].print_only_cust();
				}
			}
		}
		if (num == 21) {
			if (veh >= 1) {
				for (int i = 0; i < veh; i++) {
					cout << "Vehicle no : " << i + 1 << endl;
					V[i].print_veh_only();


				}
			}
		}
		if (num == 20) {
			for (int i = 0; i < driver; i++) {
				D[i].print_only_driver();
			}
		}

		if (num == 17) {
			if (driver >= 1) {
				update_salaries(D, driver);
			}
		}

		if (num == 18) {
			if (cust > 0)
				cancelledbookingsbycustomer(C, cust);
			else cout << "No Data Available\n";
		}
		if (num == 5) {
			int id = 0;
			if (cust >= 1) {
				cout << "Removing the Customer\n ";
				cout << "Enter the Customer's id\n";
				cin >> id;
				remove_customer(C, cust, id, remove, totalcustomer);
				if (remove) {
					cout << "Customer Removed\n";
				}
				else cout << "Customer NOt- RemoveD\n";


			}
			cout << "Removal Can't be done - No Customer Present\n";

		}
		if (num == 4) {
			if (driver >= 1) {
				int n = 0;
				cout << "Enter the Driver's ID who you want to remove\n";
				cin >> n;
				remove_driver(D, driver, n, remove, totaldriver);
			}
		}
		if (num == 11) {
			if (veh >= 1)
				vehiclewithcategory(V, veh);
			else cout << "No data to Show\n";
		}
		if (num == 19) {
			readdrivers(D, driver);
			read_customers(C, cust);
			read_vehicle(V, veh);
		}
		if (num == 12) {
			int did = 0;
			cout << "Data of A Particular Driver\n";
			cout << "Enter id of driver: ";
			cin >> did;
			if (driver >= 1) {
				q = getdriver(D, driver, did);
				if (q == -1) {
					cout << "No Driver found\n";
				}
				else {
					if (driver >= 1) {
						cout << D[q];
						cout << endl;
					}
				}
			}
			else cout << "No data to show \n";
		}
		if (num == 13) {
			system("CLS");
			int vid = 0;
			cout << "Data of A Particular Vehicle\n";
			cout << "Enter id of Vehicle: ";
			cin >> vid;
			if (veh >= 1) {
				q = getvehicle(V, veh, vid);
				if (q == -1) {
					cout << "No Vehicle found\n";
				}
				else {
					if (veh >= 1) {
						cout << V[q];
						cout << endl;
					}
				}
			}
		}
		if (num == 14) {
			int cid = 0;
			cout << "Data of A Particular Customer\n";
			cout << "Enter id of Customer: ";
			cin >> cid;
			if (cust >= 1) {
				q = getcustomer(C, cust, cid);
				if (q == -1) {
					cout << "No Customer found\n";
				}
				else {
					if (cust >= 1) {
						cout << C[q];
						cout << endl;
					}
				}
			}
		}
		if (num == 1) {
			if (driver < totaldriver) {
				add_driver(D[driver++]);
				cout << "Driver Added Successfully\n";
			}
		}
		if (num == 2) {
			if (veh < totalvehicle)
				add_vehicle(V[veh++]);
			cout << "Vehicle Added Successfully\n";
		}
		if (num == 3) {
			if (cust < totalcustomer) {
				add_customer(C[cust++]);
				cout << "Customer Added Successfully\n";
			}
		}
		if (num == 6) {
			system("CLS");
			for (int i = 0; i < driver; i++) {
				cout << "Driver No " << i + 1 << endl;
				cout << D[i];
				cout << endl;
			}

		}

		if (num == 10) {
			if (driver >= 1) {
				highrankdrivers(D, driver);
			}
			else cout << "NO driver to Display\n";
		}
		if (num == 7) {
			system("CLS");
			for (int i = 0; i < cust; i++) {
				cout << "Customer No " << i + 1 << endl;
				cout << C[i];
				cout << endl;
			}
		}

		if (num == -1) {
			cout << "Khuda Hafiz !!! ___ Have a Good day \n";
			savedrivers(D, driver);
			save_customers(C, cust);
			save_vehicle(V, veh);

			break;
		}
		if (num == 8) {
			if (driver > 0) {
				cout << "Driver(s) with Multiple Lisences\n";
				driverwithmultiplelisence(D, driver);
			}
			else {
				cout << "No Data to Show\n";
			}
		}

		if (num == 15) {
			if (driver > 0) {
				pendingdriverservices(D, driver);
			}
			else cout << "No Data to Show \n";
		}

		if (num == 9) {
			if (driver >= 1 && cust >= 1 && veh >= 1) {
				book_a_service(V, veh, C, cust, D, driver);
			}
			else cout << "Insufficent Members \n";
		}
		if (num == 16) {
			system("CLS");
			if (veh >= 1) {
				for (int i = 0; i < veh; i++) {
					cout << "Vehicle no : " << i + 1 << endl;
					cout << V[i];
					cout << endl;
				}
			}
		}
	}







		

	
	return 0;
}