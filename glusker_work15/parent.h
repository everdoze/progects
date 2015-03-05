
#ifndef PARENT_H
#define PARENT_H

#include <string>

/**
  * class parent
  * 
  */

class parent
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  parent ();

  /**
   * Empty Destructor
   */
  virtual ~parent ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  double price;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (double new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  double getPrice ()   {
    return price;
  }
private:


  void initAttributes () ;

};

#endif // PARENT_H
