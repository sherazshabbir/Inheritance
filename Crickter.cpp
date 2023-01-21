#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class cricketer{
	protected:
	string name;
	int shirt_number;
	string dob;
	int odi_rating;
	int test_rating;
	int t20i_rating;
	int starting_year;
	
	public:
		
	cricketer(){
			cout<<"Defult constructor "<<endl;
	}
	    
	cricketer(string name,int shirt_number,string dob,int odi_rating,int test_rating,int t20i_rating,int starting_year){
	    this->name=name;
	    this->shirt_number=shirt_number;
	    this->dob=dob;
	    this->odi_rating=odi_rating;
	    this->test_rating=test_rating;
	    this->t20i_rating=t20i_rating;
	    this->starting_year=starting_year;
	    cout<<"Name of the player is :"<<name<<endl;
	    cout<<"Shirt Number: "<<shirt_number<<endl;
	    cout<<"Date of birth of Babar Azam is: "<<dob<<endl;
	    cout<<"Current Odi raking: "<<odi_rating<<endl;
	    cout<<"Current test raking: "<<test_rating<<endl;
	    cout<<"Current T20i Ranking: "<<t20i_rating<<endl;
	    cout<<"Start of career is: "<<starting_year<<endl;
			
	}
	
	int calculateAge(int current_year){
		int age;
		istringstream(dob)>>age;
		age=current_year-age;
		cout<<"The Age of Babar Azam is : "<<age<<endl;
	}
	
	int calculateExperience(int current_year){
		int exper;
		//int starting_year=2015;
		exper=current_year-starting_year;
		cout<<"The Experiance of Babar Azam is "<<exper<< " Years" <<endl;
		
		
	}
	
	void changeODIRating(int rating){
		
		
		cout<<"Babar Azam New Odi Ranking :"<<rating<<endl;
	}
		
	void changeTestRating(int trating){
		cout<<"Babar Amaz new Test Rating :"<<trating<<endl;
		
	}
	
	void changeT20Rating(int tranking){
		
		cout<<"Babar Amaz new T20i Rating :"<<tranking<<endl;
	}
	
	~cricketer(){
		cout<<"________Destructor__________ "<<endl;
	}
};


class Bowler:public cricketer{
	private:
	string type;
	int total_wickets;
	int match_played;
	
	public:
		
		Bowler(){
			
		}
		
		Bowler(string type,int total_wickets,int match_played,string name,int shirtnumber,string dob,int odi_rating,int test_rating,int t20i_rating,int startyear){
			this->type=type;
			this->total_wickets=total_wickets;
			this->match_played=match_played;
			cout<<"Player Name :"<<name<<endl;
			cout<<"Player Shirt Number :"<<shirtnumber<<endl;
			cout<<"Player Date Of Birth :"<<dob<<endl;
			cout<<type<<" Bowler "<<endl;
			cout<<"Number Of Matches Played :"<<match_played<<endl;
			cout<<"Total Wickets :"<<total_wickets<<endl;
			cout<<"Currtent T20 Ranking :"<<t20i_rating<<endl;
			cout<<"Currtent Odi ranking :"<<odi_rating<<endl;
			cout<<"Current Test Ranking :"<<test_rating<<endl;
			
		}
		
		int calculateBowlAverage(int runs){
			int average;
			average=runs/total_wickets;
			cout<<"The Average if the Bowler is"<<average<<endl;;
		}
		
		void updateMatches(int updatem){
			cout<<"Matches After Update :"<<updatem<<endl;
		}
		
		
		void updateWickets(int updatew){
			cout<<"Wickets After Update :"<<updatew<<endl;
		}
		
		~Bowler(){
			cout<<"BOWLER"<<endl;
		}
		
};


class Batsman:public cricketer{
	private:
	string type; 
	int total_runs;
	int match_played;
	int best_score;
	
	public:
		
		Batsman(){
			
		}
		
		Batsman(string type,int total_runs,int match_played,int best_score,string name,int shirtnumber,string dob,int odi_rating,int test_rating,int t20i_ratin,string starting_year){
			cout<<"Player type :"<<type<<endl;
			cout<<"Player Name :"<<name<<endl;
			cout<<"Player Shirt Number :"<<shirt_number<<endl;
			cout<<"Total Matches played :"<<match_played<<endl;
			cout<<"Total Runs :"<<total_runs<<endl;
			cout<<"Best Ever Score :"<<best_score<<endl;
			cout<<"Player Shirt Number :"<<shirt_number<<endl;
			cout<<"Player Date of birth :"<<dob<<endl;
			cout<<"Player Odi ranking :"<<odi_rating<<endl;
			cout<<"Player t20i ranking :"<<t20i_rating<<endl;
			cout<<"Player Test ranking :"<<test_rating<<endl;
			cout<<"start of career :"<<starting_year<<endl;
			
		}
		
		int calculateBatAverage(int dismisel){
			int baverage;
			baverage=total_runs/dismisel;
			cout<<"Bating Average :"<<dismisel<<endl;
		}
		
		void updateMatches(int upmatches){
			cout<<"Matches After Update :"<<upmatches<<endl;
			
		}
		
		void updateRuns(int upruns){
			cout<<"Runs After Update :"<<upruns<<endl;
		}
		
		~Batsman(){
			
		}
};

class AllRounder:public Bowler,Batsman{
	public:
	AllRounder(){
		cout<<"All rounder :"<<endl;
	}
	
	~AllRounder(){
		
	}
};




int main(int argc, char** argv) {
	cricketer c1("Babar Azam",56,"1994/10/15",5,3,4,2015);
	c1.calculateAge(2022);
	c1.calculateExperience(2022);
	c1.changeODIRating(1);
	c1.changeTestRating(3);
	c1.changeT20Rating(4);
	Bowler b1("Fast",219,104,"Shaheen shah Afridi",10,"9/4/2000",3,5,9,2018);
	b1.calculateBowlAverage(2022);
	b1.updateMatches(250);
	b1.updateWickets(300);
	Batsman b2("Hitter",1000,500,190,"Fakar Zamaan",24,"10/10/1994",15,50,12,"2009");
	b2.calculateBatAverage(70);
	b2.updateMatches(500);
	b2.updateRuns(12000);
	AllRounder a1;
	
	return 0;}
