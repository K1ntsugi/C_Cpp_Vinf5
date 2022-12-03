#pragma once
#include <iostream>
#include <string>
#include <unistd.h>

using std::cout;
using std::endl;
using std::string;

typedef enum {rot, gelb, gruen} e_farbe;
typedef enum {null, eins, zwei, drei, vier, fuenf, sechs, sieben, acht} e_phase ;

void setNachtModus(bool nacht);
void showPhase();
void printColor(e_farbe e);
void switchPhases(e_phase e);
