# Proiect1_POO
					DOCUMENTATIE

Am realizat clasa mare denumita Company (companii aeriene) si clasa mai mica Flights, reprezentand zborurile din cadrul acestei companii. Am citit si afisat in int main() toatele datele, supraincarcand operatorii >> si <<, am initializat toate datele de care aveam nevoie si, dupa aceea, am realizat mai multe functii pentru a indeplini cerintele cerute:
             
	     1.	Clasa Flights
  -	Set-eri si get-eri: ajuta la obtinerea valorii variabilelor
  -	Functia total(): calculeaza numarul total de personae aflate la bordul avionului (number_passengers+cabin_crew) -- acest lucru se poate realiza fara supraincarcarea operatorului +, intrucat se realizeaza adunarea a doua numere
  -	Functia free_seats() : calculeaza numarul de locuri libere din avion (seats-number_passengers) -- acest lucru se poate realiza fara supraincarcarea operatorului -, intrucat se realizeaza scaderea a doua numere
  -	Supraincarcarea operatorului +=: este menita sa calculeze numarul total de pasageri din cele doua zboruri si sa adauge, de asemenea, si numarul de minori prezenti la bordul avionului
  -	Supraincarcarea operatorului -=: este menita sa calculeze diferenta dintre numarul total de pasageri din cele doua zboruri si, de asemenea, sa scada numarul minorilor prezenti la bordul  avionului 
  -	Supraincarcarea operatorului !=: testeaza daca cele doua zboruri au acelasi id
  -	Supraincarcarea operatorului ==: testeaza daca cele doua avioane au aceeasi ora de decolare de pe aeroport
             
	     2.	Clasa Company
  -	Am declarat si o variabila de tip Flights pentru a realiza compunerea intre clase
  -	Set-eri si get-eri: ajuta la obtinerea valorii variabilelor
  -	Functia salary(): determina salariul mediu, sub forma unui double, al unui angajat din companie (budget*1.0/personal) – acest lucru se poate realiza fara supraincarcarea operatorilor * sau  /, intrucat se realizeaza aceste operatii asupra unor numere
  -	Supraincarcarea operatorului -: calculeaza diferenta dintre castigurile celor doua companii, mai precis, cea care are profitul mai mare
  -	 Supraincarcarea operatorului *: calculeaza totalul zborurilor de la cele doua companii dintr-un numar de zile cu ajutorul get-erilor nf (number_flights) si nd (number_days) – acest lucru se poate realiza fara supraincarcarea operatorilor +, intrucat se realizeaza aceste operatii asupra unor numere
In int main() am realizat cele doua fluxuri de testare ale functiilor, apeland, astfel, toate componentele claselor.

									                                                                          Iftimi Ruxandra, 134

