#include <iostream>

///FLIGHTS
class Flights {
public:
    Flights(std::string id, unsigned int number, unsigned int number_passengers, unsigned int cabin_crew, unsigned int departure_hour, unsigned int seats);
    Flights (const Flights&);
    Flights();
    std::string getId();
    unsigned int get_np();
    unsigned int get_cc();
    unsigned int get_dh();
    unsigned int get_seats();
    void setId(std::string);
    void set_np(unsigned int);
    void set_cc(unsigned int);
    void set_dh(unsigned int);
    void set_seats(unsigned int);
    friend std::istream& operator >> (std::istream& stream, Flights& flight);
    friend std::ostream& operator << (std::ostream& stream, Flights& flight);
    unsigned int total();
    unsigned int free_seats();
    Flights& operator +=(Flights&);
    Flights& operator +=(unsigned int);
    Flights& operator -=(Flights&);
    Flights& operator -=(unsigned int);
    friend bool operator != (Flights&, Flights&);
    friend bool operator == (Flights&, Flights&);
private:
    std::string id;
    unsigned int number;
    unsigned int number_passengers;
    unsigned int cabin_crew;
    unsigned int departure_hour;
    unsigned int seats;
};

Flights::Flights(std::string id, unsigned int number, unsigned int number_passengers, unsigned int cabin_crew, unsigned int departure_hour, unsigned int seats) {
    this->id = id;
    this->number = number;
    this->number_passengers=number_passengers;
    this->cabin_crew=cabin_crew;
    this->departure_hour = departure_hour;
    this->seats=seats;
}

Flights::Flights(const Flights& flight) {
    id = flight.id;
    number = flight.number;
    number_passengers=flight.number_passengers;
    cabin_crew=flight.cabin_crew;
    departure_hour = flight.departure_hour;
    seats=flight.seats;
}

Flights::Flights() {}

std::string Flights::getId() {
    return this->id;
}

unsigned int Flights::get_np(){
    return this->number_passengers;
}

unsigned int Flights::get_cc(){
    return this->cabin_crew;
}

unsigned int Flights::get_dh(){
    return this->departure_hour;
}

unsigned int Flights::get_seats(){
    return this->seats;
}

void Flights::setId(std::string id) {
    this->id = id;
}

void Flights::set_np(unsigned int){
    this->number_passengers=number_passengers;
}

void Flights::set_cc(unsigned int){
    this->cabin_crew=cabin_crew;
}

void Flights::set_dh(unsigned int){
    this->departure_hour=departure_hour;
}

void Flights::set_seats(unsigned int){
    this->seats=seats;
}

std::istream& operator >> (std::istream& stream, Flights& flight) {
    stream >> flight.id >> flight.number >> flight.number_passengers >> flight.cabin_crew >> flight.departure_hour >> flight.seats;
    return stream;
}

std::ostream& operator << (std::ostream& stream, Flights& flight){
    stream<<flight.id <<'\n'<< flight.number <<'\n'<< flight.number_passengers<< '\n' << flight.cabin_crew<< '\n' << flight.departure_hour<< '\n'<< flight.seats;
    return stream;
}

unsigned int Flights::total(){
        return this->number_passengers + this->cabin_crew;
}

unsigned int Flights::free_seats(){
        return this->seats - this->number_passengers;
}

Flights& Flights::operator += (Flights& flight){
    this->number_passengers += flight.number_passengers;
    return *this;
}

Flights& Flights::operator += (unsigned int under_age_passengers){
    number_passengers += under_age_passengers;                     //pasageri in plus
    return *this;
}

Flights& Flights::operator -= (Flights& flight){
    this->number_passengers -= flight.number_passengers;        //diferenta dintre numarul pasagerilor celor doua zboruri
    return *this;
}

Flights& Flights::operator -= (unsigned int under_age_passengers){
    number_passengers -= under_age_passengers;                     //pasageri minori nu platesc los separat in avion
    return *this;
}

bool operator != (Flights& flight1, Flights& flight2) {
    return flight1.getId().compare(flight2.getId()) == 0;       //id-ul celor doua avioane sunt la fel
}

bool operator == (Flights& flight1, Flights& flight2) {
    return flight1.get_dh()==flight2.get_dh();                  //ora de decolare a celor doua avioane este aceeasi
}

///COMPANY
class Company{
public:
    Company(std::string name, unsigned int gain, unsigned int loss, unsigned int personal, unsigned int budget,unsigned int number_flights,unsigned int number_days, Flights new_flight);
    Company(const Company&);
    Company();
    friend std::istream& operator >> (std::istream& stream, Company& company);
    friend std::ostream& operator << (std::ostream& stream, Company& company);
    unsigned int get_gain();
    unsigned int get_loss();
    unsigned int get_personal();
    unsigned int get_budget();
    unsigned int get_nf();
    unsigned int get_nd();
    void set_nf(unsigned int);
    void set_nd(unsigned int);
    void set_gain(unsigned int);
    void set_loss(unsigned int);
    void set_personal(unsigned int);
    void set_budget(unsigned int);
    double salary();
    friend int operator - (Company&);
    friend int operator * (Company&);
private:
    std::string name;
    unsigned int gain;
    unsigned int loss;
    unsigned int personal;
    unsigned int budget;
    unsigned int number_flights;
    unsigned int number_days;
    Flights new_flight;
};

Company::Company(std::string name, unsigned int gain, unsigned int loss, unsigned int personal, unsigned int budget, unsigned int number_flights, unsigned int number_days, Flights new_flight){
    this->name=name;
    this->gain=gain;
    this->loss=loss;
    this->personal=personal;
    this->budget=budget;
    this->number_flights=number_flights;
    this->number_days=number_days;
    this->new_flight=new_flight;
}

Company::Company(){
}

Company::Company(const Company& company){
    name=company.name;
    gain=company.gain;
    loss=company.loss;
    personal=company.personal;
    budget=company.budget;
    number_flights=company.number_flights;
    number_days=company.number_days;
    new_flight=company.new_flight;
}

unsigned int Company::get_gain(){
    return this->gain;
}

unsigned int Company::get_loss(){
    return this->loss;
}

unsigned int Company::get_personal(){
    return this->personal;
}

unsigned int Company::get_budget(){
    return this->budget;
}

unsigned int Company::get_nf(){
    return this->number_flights;
}

unsigned int Company::get_nd(){
    return this->number_days;
}

void Company::set_gain(unsigned int){
    this->gain=gain;
}

void Company::set_loss(unsigned int){
    this->loss=loss;
}

void Company::set_personal(unsigned int){
    this->personal=personal;
}

void Company::set_budget(unsigned int){
    this->budget=budget;
}

void Company::set_nf(unsigned int){
    this->number_flights=number_flights;
}

void Company::set_nd(unsigned int){
    this->number_days=number_days;
}

std::istream& operator >> (std::istream& stream, Company& company) {
    stream >> company.name >> company.gain >> company.loss >> company.personal >> company.budget >> company.number_flights >> company.number_days;
    return stream;
}

std::ostream& operator << (std::ostream& stream, Company& company){
    stream << company.name <<'\n'<< company.gain <<'\n'<< company.loss <<'\n'<< company.personal <<'\n'<< company.budget << '\n' << company.number_flights << '\n' << company.number_days;
    return stream;
}

double Company::salary(){
    return this->budget*1.0 / this->personal;
}

int operator - (Company& company1, Company& company2){
    return company1.get_gain()-company2.get_gain();                  //Diferenta dintre profiturile companiilor
}

int operator *(Company& company1, Company& company2){
    return company1.get_nf()*company1.get_nd()+company2.get_nf()*company2.get_nd();                 //ZBORURI*ZILE
}

int main(int argc, const char * argv[]) {
    Flights flight1 = Flights("KL153", 153, 20, 5, 20, 20); //id no no_passengers cabin_crew depart seats
    Flights flight2 = Flights("AF153", 154, 18, 3, 14, 20);
    std::cout<< flight1.total()<<std::endl;
    std::cout<<std::endl;
    std::cout<< flight1.free_seats()<<std::endl;
    std::cout<<std::endl;
    flight1 += flight2;
    std::cout << flight1<<std::endl;
    std::cout<<std::endl;
    flight1 +=2;
    std::cout << flight1<<std::endl;
    std::cout<<std::endl;
    flight1 -= flight2;
    std::cout << flight1<<std::endl;
    std::cout<<std::endl;
    flight1 -=2;
    std::cout << flight1<<std::endl;
    std::cout<<std::endl;
    std::cout << (flight1!=flight2) << std::endl;
    std::cout<<std::endl;
    std::cout << (flight1==flight2) <<std::endl;
    std::cout<<std::endl;
    Flights flight3 =Flights("KL153", 153, 20, 5, 20, 20);
    Flights flight4 =Flights("AF153", 154, 18, 3, 14, 20);
    Company company1=Company("KLM", 500, 200, 20, 1000, 10, 3, flight3);    //name gain loss pers budget no_fl no_day
    Company company2=Company("AirFrance", 600, 300, 26, 2000, 5, 2, flight4);
    std::cout<<company1.salary()<<std::endl;
    std::cout<<std::endl;
    std::cout<<company1-company2<<std::endl;
    std::cout<<std::endl;
    std::cout<< company1*company2 <<std::endl;
    std::cout<< std::endl;

    Flights flight5 = Flights("KL153", 153, 20, 5, 20, 20);     //id no no_passengers cabin_crew depart seats
    Flights flight6 = Flights("KL153", 153, 18, 3, 14, 20);
    std::cout<<std::endl;
    std::cout<< flight5.total()<<std::endl;
    std::cout<<std::endl;
    std::cout<< flight5.free_seats()<<std::endl;
    std::cout<<std::endl;
    flight5 += flight6;
    std::cout << flight5<<std::endl;
    std::cout<<std::endl;
    flight5 +=2;
    std::cout << flight5<<std::endl;
    std::cout<<std::endl;
    flight5 -= flight6;
    std::cout << flight5<<std::endl;
    std::cout<<std::endl;
    flight5 -=2;
    std::cout << flight5<<std::endl;
    std::cout<<std::endl;
    std::cout << (flight5!=flight6) << std::endl;
    std::cout<<std::endl;
    std::cout << (flight5==flight6) <<std::endl;
    std::cout<<std::endl;
    Flights flight7 =Flights("KL153", 153, 20, 5, 20, 20);
    Flights flight8 =Flights("KL153", 153, 18, 3, 14, 20);
    Company company3=Company("KLM", 500, 200, 20, 1000, 10, 3, flight7);    //name gain loss pers budget no_fl no_day
    Company company4=Company("KLM", 500, 200, 20, 1000, 10, 3, flight8);
    std::cout<<company3.salary()<<std::endl;
    std::cout<<std::endl;
    std::cout<<company3-company4<<std::endl;
    std::cout<<std::endl;
    std::cout<< company3*company4 <<std::endl;
    return 0;
}
