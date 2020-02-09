#include <bits/stdc++.h>
using namespace std;

class job{
	public:
		int id,prof,dead ; 

		bool operator< (job j){
			return prof > j.prof ; 
		}

};


int main(){
	int n;
	cout<<"Number of jobs"<<endl;
	cin>>n;
       	job* arr = new job[n] ; 	
	for(int i=0 ; i<n ; i++){
		int in,pr,de; cin>>in>>pr>>de ; 
		arr[i].id = in ;arr[i].prof = pr ; arr[i].dead = de; 
      }
	sort(arr,arr+n) ; 
	int mark[n];
	memset(mark,0,sizeof(mark)) ; 
	vector<int> v ;
       /*cout<<"%%%%%%%%%%%%%%%%%%%%%%%"<<endl;	
	for(int i=0 ; i<n ; i++){
	cout<<arr[i].prof<<endl;
	}
cout<<"#######################"<<endl;  */	
	for(int i=0 ; i<n ; i++){
		job curr = arr[i] ; 
		for(int j=min(n,curr.dead) ; j>=1 ; j--){
			if(mark[j] == 0){
				mark[j] = 1;
				v.push_back(curr.id) ; 
				break;
			}
		}
	}

	//reverse(v.begin(),v.end());
	for(int i=0 ; i<v.size() ; i++){
	cout<<v[i]<<" ";
	}
	cout<<endl;


}	
