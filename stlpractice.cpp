#include<bits/stdc++.h>
#include<string>

using namespace std;

struct data {
    string name;
    int height, weight;
    long long income;
};


bool compare( data a, data b ) {
    if( a.income == b.income ) {
        if( a.height == b.height ) {
            if( a.weight == b.weight ){
            	int x, y;
            	//x = size(a.name);
            	x = a.name.size();
            	//y = size(b.name);
            	y = b.name.size();
            	if(x < y)
            		return true;
            	else
            		return false;
			}
            else return a.weight < b.weight;
        }else return a.height > b.height;
    }else return a.income > b.income;
}

int main(){
	int a, n;
	vector <data> patro;
	
	cin >> n;
	for(int i = 0; i<n; i++){
		patro.push_back(data());
		cin >> patro[i].name >> patro[i].height >> patro[i].weight >> patro[i].income;
	}
	sort(patro.begin(), patro.end(), compare);
	/*vector <int> v;
	vector <int> :: iterator it;
	priority_queue <int> pq; 
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
		pq.push(a);
	}
	for(it = v.begin(); it != v.end(); it++){
		cout << " " << *it << endl;
	}
	while(!pq.empty()){
		cout << " " << pq.top() << endl;
		pq.pop();
	}*/
	vector <data> :: iterator it;
	for(int i = 0; i<n; i++){
		//patro.push_back(data());
		cout << " " << patro[i].name  << " " << patro[i].height << " "  << patro[i].weight << " " << patro[i].income << endl;
	}
	return 0;
}

/*
    map< string, int  > m;
    string goru;
    
    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;        
    }
    
*/
