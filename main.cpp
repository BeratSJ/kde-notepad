#include <QApplication>
#include <QCommandLineParser>
#include <KAboutData>
#include <KLocalizedString>

#include "mainwindow.h"


int main (int argc, char *argv[])
{
    using namespace Qt::Literals::StringLiterals;

    QApplication app(argc, argv);
    KLocalizedString::setApplicationDomain("mainwindow");

    KAboutData aboutData(
        u"mainwindow"_s,
        i18n("Main Window"),
        u"1.0"_s,
        i18n("A simple text area"),
        KAboutLicense::GPL,
        i18n("(c) 2024"),
        i18n("Educational application..."),
        u"x"_s,
        u"f"_s);

    aboutData.addAuthor(
        i18n("John Doe"),
        i18n("Tutorial learner"),
        u"x"_s,
        u"y"_s,
        u"z"_s);

    KAboutData::setApplicationData(aboutData);

    QCommandLineParser parser;
    aboutData.setupCommandLine(&parser);
    parser.process(app);
    aboutData.processCommandLine(&parser);


    MainWindow *window = new MainWindow();

    window->show();

    KLocalizedString::setApplicationDomain("texteditor");

    KAboutData aboutData(
            u"texteditor"_s,)



    return app.exec();

}
