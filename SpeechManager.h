//
// Created by Eric on 2020/11/20.
//

#ifndef SPEECHMANAGER_SPEECHMANAGER_H
#define SPEECHMANAGER_SPEECHMANAGER_H

#include <iostream>
#include <vector>
#include <map>
#include "Speaker.h"
#include "algorithm"
#include <deque>
#include <functional>
#include <fstream>
#include <numeric>

using namespace std;

class SpeechManager
{
public:
    SpeechManager();

    void show_Menu();

    void exit_System();

    ~SpeechManager();

    void init_Speech();

    void createSpeaker();

    void startSpeech();

    void speechDraw();

    void speechContest();

    void showScore();

    void saveRecord();

    void loadRecord();

    void showRecord();

    void clearRecord();

    bool fileIsEmpty;

    map<int, vector<string>> m_Record;
    //比赛选手 容器  12人
    vector<int> v1;

    //第一轮晋级容器  6人
    vector<int> v2;

    //胜利前三名容器  3人
    vector<int> vVictory;

    //存放编号 以及对应的 具体选手 容器
    map<int, Speaker> m_Speaker;

    int m_Index;
};


#endif //SPEECHMANAGER_SPEECHMANAGER_H
