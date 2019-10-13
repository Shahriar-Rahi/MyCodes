#include<iostream>
#include<sstream>
#include<string>

using namespace std;

string compression(string ms){
	string cs;
	int count = 1;
	stringstream ss;
	char prev = ms[0];
	int mslen = ms.length(); 
	for(int i = 1; i < mslen; i++){
		char curr = ms[i];
		if(prev == curr){
			count++;
		}
		else{
			ss << prev << count;
			prev = curr;
			count = 1;
		}
	}
	ss << prev << count;
	cs = ss.str();
	int cslen = cs.length();
	if(mslen < cslen){
		return ms;
	}
	else{
		return cs;
	}
}

string decompression(string rcs){
	//string cs;
	//int count = 1;
	stringstream ssd;
	//char prev = ms[0];
	int rcslen = rcs.length();
	string des;
	int alpha = 0;
	int count;
	char buffer; 
	for(int i = 0; i < rcslen; i++){
		char curr = rcs[i];
		if(!isdigit(curr)){
			if(alpha > 0){
				for(int j = 0; j < count; j++){
					ssd << buffer;
					//cout << buffer;
				}
			}
			alpha++;
			//continue;
			count = 0;
			buffer = curr;
			//cout << "alpha  = " << alpha << endl;
		}
		else{
			//while(isdigit(curr)){
				count = 10*count + (curr - '0');
			//}
		}
		//cout << "count = " << count << endl;
	}
	for(int j = 0; j < count; j++){
		ssd << buffer;
					//cout << buffer;
	}
	des = ssd.str();
	return des;
}

int main(){
	
	string ms = "aaaabbbbbbtyttttt";
	string rles = compression(ms);
	cout << rles << endl;
	string decom = decompression(rles);
	cout << decom << endl;
	return 0;
}
