#include "subject.h"
 
Subject::Subject(std::string name){
    this->name = name;
    this->observers = std::vector<Observer *>();
}
 
void Subject::addObserver(Observer *observer){
    observers.push_back(observer);
}
 
void Subject::notifyObservers(std::string message){
    for(int i=0;i<observers.size();i++){
        observers[i]->notify(message,name);
    }
}
