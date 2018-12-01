#include<bits/stdc++.h>

using namespace std;

int main(){
	
	/*map< string, int  > m;
    string goru;
    
    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;        
    }*/
    string line;
    /*while(1) {
    	getline(cin, line);
        stringstream ss( line ); // initialize kortesi
        int num; vector< int > v;
        while( ss >> num ){
			v.push_back( num );
		} // :P
        sort( v.begin(), v.end() );
        // print routine
        vector<int> :: iterator it;
        for(it = v.begin(); it != v.end(); it++){
        	cout << " " << *it << endl;
		}
    }*/
    
    /*set <int> s;
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
    	
    	cin >> a;
    	s.insert(a);
    	
	}
	set<int> :: iterator it;
	
	for(it = s.begin(); it != s.end(); it++){
        	cout << " " << *it << endl;
	}*/
	
	//pair <int, int> p;
	/*vector < pair <int, int> > v;
	int n, a, b;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		//p = make_pair(a, b);
		v.push_back(make_pair(a, b));
	}
	//vector<int> :: iterator it;
    /*for(int i = 0; i < n; i++){
       	cout << " " << v[i].first << " "<< v[i].second << endl;
	}*/
	/*vector< pair <int, int> > :: iterator it;
        for(it = v.begin(); it != v.end(); it++){
        	cout << " " << it->first << " " << it->second << endl;
		}*/
		
		
	map< int, int  > m;
    int i, j;
    map < int, int > :: iterator it;
    while( cin >> i ) {
        if( i == 10 ) break;
        cin >> j;
        m.insert(pair <int, int> (i, j));       
    }
    for(it = m.begin(); it != m.end(); it++){
        	cout << " " << it->first << " " << it->second << endl;
		}
    return 0;
}
