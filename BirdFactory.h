//
//  BirdFactory.h
//  Lab03
//
//  Created by savanna on 4/29/25.
//
#pragma once

#include "bird.h"

enum BirdType {STANDARD, FLOATER, SINKER, CRAZY};

class BirdFactory
{
   
public:
   
   virtual Bird * factory(BirdType bt) = 0;
   
};



/*********************************************
 * LEVEL 1
 * Instantiate new bird objects only for level 1
 *********************************************/
class BirdFactoryLevel1 : public BirdFactory
{
public:
   Bird * factory(BirdType bt)
   {
      int size = 30.0;
      
      switch (bt)
      {
         case STANDARD:
            return new Standard(size, 7.0, 12);
         default:
            return nullptr;
      }
      
   }
   
};

/*********************************************
 * LEVEL 2
 * Instantiate new bird objects only for level 2
 *********************************************/
class BirdFactoryLevel2 : public BirdFactory
{
public: 
   Bird * factory(BirdType bt)
   {
      int size = 25.0;
      
      switch (bt)
      {
         case STANDARD:
            return new Standard(size, 7.0, 12);
         case SINKER:
            return new Sinker(size, 4.0, 22);
         default:
            return nullptr;
      }
      
   }
   
};

/*********************************************
 * LEVEL 3
 * Instantiate new bird objects only for level 3
 *********************************************/
class BirdFactoryLevel3 : public BirdFactory
{
public:
   Bird * factory(BirdType bt)
   {
      int size = 20.0;
      
      switch (bt)
      {
         case STANDARD:
            return new Standard(size, 5.0, 15);
         case SINKER:
            return new Sinker(size, 4.0, 22);
         case FLOATER:
            return new Floater(size);
         default:
            return nullptr;
      }
      
   }
   
};

/*********************************************
 * LEVEL 4
 * Instantiate new bird objects only for level 4
 *********************************************/
class BirdFactoryLevel4 : public BirdFactory
{
public:
   Bird * factory(BirdType bt)
   {
      int size = 15.0;
      
      switch (bt)
      {
         case STANDARD:
            return new Standard(size, 4.0, 18);
         case SINKER:
            return new Sinker(size, 3.5, 25);
         case FLOATER:
            return new Floater(size, 4.0, 25);
         case CRAZY:
            return new Crazy(size);
         default:
            return nullptr;
      }
      
   }
   
};

