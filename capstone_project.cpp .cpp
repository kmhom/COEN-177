#include <stdio.h>
#include<stdlib.h>
#include <queue>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


struct Process{
	int PID;
	int burst_time;
	int arrival_time;
	int priority;
} ;

queue<Process>  RR;
vector<Process> SRTF;
vector<Process> PRI;
void round_robin(){
	int quantum=SOMEVALUE;
	while(!RR.empty()){
		if(RR.top().burst_time > quantum)
			RR.top().burst_time-=quantum;
			SRTF.pushback(RR.top());
			cout<<RR.top().PID<< “ is moved to level 2”<<endl;
			RR.pop();
		}
		else{
			cout<<RR.top().PID<< “ Finished”<<endl;
			RR.pop();
		}
	}
}

void srtf(){
	while(!SRTF.empty()){
		int s=100000000;//variable to capture the PID with shortest remaining time
		int c=0;//a counter to look for the shortest remaining time
		int index=0;
		for (auto e = SRTF.begin(); e != SRTF.end(); e++){
			if(e.burst_time<s && e.burst_time>0){
				s=e.burst_time;
		index=c;
	}
	c++;
}

c=0;
bool flag=false;

for (auto e = SRTF.begin(); e != SRTF.end(); e++){
	if(flag==true){
		SRTF.erase(SRTF.begin());
		flag=false;
	}
	if(e.arrival_time <SRTF[index].arrival_time && e.burst_time>0){
		e.burst_time-SRTF[index].arrival_time;
		if(e.burst_time<=0){
			if(e==SRTF.begin()){
				flag=true;
				cout<<e.PID<< “processed finished”<<endl;
			}
else{		
	cout<<e.PID<< “processed finished”<<endl;
				e=SRTF.begin()+c-1;
				SRTF.erase(SRTF.begin+c);
				c--;
			}
		else{
			PRI.pushback(e);	
			if(e==SRTF.begin()){
				flag=true;
				cout<<e.PID<< “processed move to level 3”<<endl;
			}
else{		
	cout<<e.PID<< “processed move to level 3”<<endl;
				e=SRTF.begin()+c-1;
				SRTF.erase(SRTF.begin+c);
				c--;
			}
		}
	}
	c++;
}


 Bool comparison(Process x, Process y){
	Return (x.priority > y.priority)
}
void priority_scheduling(){
int highest_priority = 0; 
Int highest_priority_index = 0;
Int index = 0;
while(!PRI.empty()){
	Highest_priority = PRI[0]; 
	If (PRI.size() == 1){ // since there is one process left in the vector just run it
		Cout << “Process “ << PRI[0].PID << “ has finished with a priority of ” << PRI[0].priority << endl; 
		Count << “All processes have been completed! ”
		PRI.clear();
		break;
	}
		for (auto e = PRI.begin() + 1; e != PRI.end(); e++){ 
			if(highest_priority > e.priority){
				Highest_priority = e.priority;
				Highest_priority_index = index;
}
Index++;
}
	PRI.erase(high_priority_index)
	
Cout << “Process “ << e.PID << “ has finished with a priority of “ << 
highest_priority << endl;

}
	sort(PRI, sizeof(PRI), comparison);
	for(auto e = PRI.begin(); e != PRI.end(); e++){
		printf(“Process %d has been processed with priority number %d \n”, e.PID, e.priority);
} 


		
	

int main(){
	srand(time(0))
	for(int i=0; i<NUMBER_OF_PROCESSES; i++){
		Process p;
		p.PID=(rand()%NUMBER_OF_PID);
		p.burst_time=(rand()%LONGEST_BURST_TIME)+1;
		p.priority=(rand()%HIGHEST_PRIORITY_NUMBER);
		RR.push(p);
	}std





