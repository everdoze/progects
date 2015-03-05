
#ifndef BOOKS_H
#define BOOKS_H
#include "parent.h"

#include <string>

/**
  * class books
  *
  */
using namespace std;
class books : public parent
{
public:

  // Constructors/Destructors
  //


  /**
   * Empty Constructor
   */
  books ();

  /**
   * Empty Destructor
   */
  virtual ~books ();

  // Static Public attributes
  //

  // Public attributes
  //


  // Public attribute accessor methods
  //


  // Public attribute accessor methods
  //



  /**
   */
  void view ();

protected:

  // Static Protected attributes
  //

  // Protected attributes
  //

public:


  // Protected attribute accessor methods
  //

protected:

public:


  // Protected attribute accessor methods
  //

protected:


private:

  // Static Private attributes
  //

  // Private attributes
  //

  string author;
  string name;
  int pages;
public:


  // Private attribute accessor methods
  //

private:

public:


  // Private attribute accessor methods
  //


  /**
   * Set the value of author
   * @param new_var the new value of author
   */
  void setAuthor (string new_var)   {
      author = new_var;
  }

  /**
   * Get the value of author
   * @return the value of author
   */
  string getAuthor ()   {
    return author;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of pages
   * @param new_var the new value of pages
   */
  void setPages (int new_var)   {
      pages = new_var;
  }

  /**
   * Get the value of pages
   * @return the value of pages
   */
  int getPages ()   {
    return pages;
  }
private:


  void initAttributes () ;

};

#endif // BOOKS_H
