/****************************************************************************
**
**         Created using Monkey Studio IDE v1.9.0.1 (1.9.0.1)
** Authors   : Filipe Azevedo aka Nox P@sNox <pasnox@gmail.com> and The QodeEdit development team
** Project   : QodeEdit
** FileName  : syntax/Helpers.h
** Date      : 2012-09-02T23:04:46
** License   : LGPL3
** Comment   : A source code component editor based on QPlainTextEdit/QTextDocument/QSyntaxHighlighter and Kate xml language definition files.
** Home Page : https://github.com/pasnox/qodeedit
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/
#ifndef THEME_H
#define THEME_H

#include <QExplicitlySharedDataPointer>
#include <QList>
#include <QTextCharFormat>

#include "syntax/Helpers.h"
#include "QodeEdit.h"

namespace Theme {

class SchemaData;

class Style : public QTextCharFormat
{
};

class Schema
{
    Q_ENUMS( DefaultStyle )
    
private:
    QExplicitlySharedDataPointer<Theme::SchemaData> d;
    
public:
    typedef QList<Theme::Style> List;
    
    QE_DECL_SHARED_CLASS( Schema, Theme );
    
    QString name() const;
    
    Theme::Style style( QodeEdit::Style type ) const;
    void setStyle( QodeEdit::Style type, const Theme::Style& style );

protected:
    void setName( const QString& name );
};

}; // Theme

#endif // THEME_H