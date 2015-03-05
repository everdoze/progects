
#ifndef DISCS_H
#define DISCS_H
#include "parent.h"
#include <iostream>
#include <string>

/**
  * class discs
  *
  */
using namespace std;
class discs : public parent
{
public:

  // Constructors/Destructors
  //


  /**
   * Empty Constructor
   */
  discs ();

  /**
   * Empty Destructor
   */
  virtual ~discs ();

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

  string name;
  int p_list_size;
public:


  // Private attribute accessor methods
  //

private:

public:


  // Private attribute accessor methods
  //


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
   * Set the value of p_list_size
   * @param new_var the new value of p_list_size
   */
  void setP_list_size (int new_var)   {
      p_list_size = new_var;
  }

  /**
   * Get the value of p_list_size
   * @return the value of p_list_size
   */
  int getP_list_size ()   {
    return p_list_size;
  }
private:


  void initAttributes () ;

};

#endif // DISCS_H
