//A book consists of chapters, chapters consist of sections and sections consist of subsections.
//Construct a tree and print the nodes. Find the time and space requirements of your method.
 
#include <iostream>
#include <vector>
using namespace std;

class Subsection 
{
public:
    string name;
    Subsection(string n) { name=n; }
};

class Section
{
public:
    string name;
    vector<Subsection> subsections;
    Section(string n) { name=n; }
    void addSubsection(Subsection s) { subsections.push_back(s); }
};

class Chapter
{
public:
    string name;
    vector<Section> sections;
    Chapter(string n) { name = n; }
    void addSection(Section s) { sections.push_back(s); }
};

int main()
{
	char section;
    Chapter chapter1("Chapter 1");
    Section section1("Section 1");
    section1.addSubsection(Subsection("Subsection 1"));
    section1.addSubsection(Subsection("Subsection 2"));
    Section section2("Section 2");
    section2.addSubsection(Subsection("Subsection 1"));
    section2.addSubsection(Subsection("Subsection 2"));
    chapter1.addSection(section1);
    chapter1.addSection(section2);

    cout<<"Book structure:"<<endl;
    cout<<chapter1.name<<endl;
    for(auto section:chapter1.sections)
    {
        cout<<"\t"<<section.name<<endl;
        for(auto subsection:section.subsections)
        {
            cout<<"\t\t"<<subsection.name<<endl;
        }
    }

    return 0;
}

