#include <Ampel.hpp>

struct Ampel
{
    string stop = "Rot";
    string halt = "gelb";
    string los = "Gruen";
} outputAmpel;

bool setTagModus()
{
    cout << "Tag " << endl;
    return true;
};

bool setNachtModus()
{
    cout << "Nacht" << endl;
    return false;
}

void testOutput()
{
    cout << outputAmpel.stop << endl;
}