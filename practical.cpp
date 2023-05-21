#include <iostream>
#include<iomanip>
using namespace std;
#define SIZE 50
class GRAPH{
private:
int landmarks,path;
int City [SIZE][SIZE];
int distance[SIZE];
int visited[SIZE];
public:
GRAPH(){};
GRAPH(int l , int p);
void create_city_graph();
void display_city_graph();
int find_min_landmark();
void dijkstras_algo();
};
GRAPH :: GRAPH(int l , int p){
landmarks = l;
path = p;
for(int i=0;i<landmarks;i++){
distance[i]=INT32_MAX;
visited[i]=0;
for(int j=0;j<landmarks;j++){
City[i][j]=0;
}
}
distance[0]=0;
}
void GRAPH :: create_city_graph(){
int dist,source,destination;
for(int i=0;i<path;i++){
cout<<"Enter the source landmark : ";
cin>>source;
cout<<"Enter the destination landmark :";
cin>>destination;
if(source!=destination){
if(City[source-1][destination-1]==0 && City[source-1][destination-1]==0){
cout<<"Enter the distance between source and destination : ";
cin>>dist;
City[source-1][destination-1]=dist;
City[destination-1][source-1]=dist;
cout<<"Path between "<<source<<" and "<<destination<<" is created"<<endl;
}
else{
cout<<"Path already exists"<<endl;
i--;
continue;
}
}
else{
cout<<"Source and destination cannot be same!"<<endl;
i--;
continue;
}
}
cout<<"Graph of a city has been created successfully...."<<endl;
}
void GRAPH :: display_city_graph(){
for(int i=0;i<landmarks;i++){
for(int j=0;j<landmarks;j++){
cout<<setw(3)<<City[i][j];
}
cout<<endl;
}
}
int GRAPH :: find_min_landmark(){
int min_landmark=-1;
for(int i=0;i<landmarks;i++){
if(!visited[i] && (min_landmark == -1 || distance[i] < distance[min_landmark])){
min_landmark = i;
}
}
return min_landmark;
}
void GRAPH :: dijkstras_algo(){
for(int i=0;i<landmarks;i++){
int min_landmark = find_min_landmark();
visited[min_landmark] = 1;
for(int j=0;j<landmarks;j++){
if(!visited[j] && City[min_landmark][j] !=0){
int dist = distance[min_landmark] + City[min_landmark][j];
if(dist < distance[j]){
distance[j] = dist;
}
}
}
}
cout<<"Landmark\t"<<"Minimum Distance"<<endl;
for(int i=0;i<landmarks;i++){
cout<<i+1<<"\t "<<distance[i]<<endl;
}
}
int main()
{
GRAPH g;
int choice, l, p;
while (1)
{
cout << "Implementation of Dijkstra's algorithm" << endl;
cout << "1. Create City Graph" << endl;
cout << "2. Display City Graph" << endl;
cout << "3. Find shortest path using Dijkstra's algorithm" << endl;
cout << "4. Exit the program" << endl;
cout << "\nEnter your choice:- ";
cin >> choice;
switch (choice)
{
case 1:
cout << "Enter the number of Landmarks:- ";
cin >> l;
cout << "Enter the number of Paths:- ";
cin >> p;
g = GRAPH(l, p);
g.create_city_graph();
break;
case 2:
g.display_city_graph();
break;
case 3:
g.dijkstras_algo();
break;
case 4:
return 0;
default:
cout << "\nError in choice, try again" << endl;
}
}
return 0;
}