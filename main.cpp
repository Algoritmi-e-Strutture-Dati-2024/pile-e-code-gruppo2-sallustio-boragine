#include <iostram>
int main()
{
	Pila p;
    p.push(21);
    p.push(32);
    p.push(38);
    
    cout << "Elemento in cima: " << p.top() << endl;
    cout << "Rimozione: " << p.pop() << endl;
    cout << "Elemento in cima dopo pop: " << p.top() << endl;
    cout<<"Vuoi vedere se la pila è piena?"<<p.isEmpty()"si" "NO"<<endl;
    cout<<"lunghezza pila":<< p.size();

	Coda c;
	c.enqueue(10); 
    c.enqueue(20); 
    c.enqueue(30);  

    cout << "Elemento in testa alla coda: " << c.front() << endl;
    cout << "Rimozione: " << c.dequeue() << endl;  // Rimuove il primo elemento
    cout << "Elemento in testa dopo dequeue: " << c.front() << endl;
    cout<<"Vuoi vedere se la coda è piena?"<<c.isEmpty()"si" "NO"<<endl;
    cout << "Numero di elementi nella coda: " << c.size() << endl;	    
}

