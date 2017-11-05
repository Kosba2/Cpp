            do
            {   
                cout << setw(PROMPT_WIDTH) << "Weight: ";
                cin  >> weight;
                cin.ignore(10000, '\n');
                
                //weightInvalid is T if it is within a reasonable range
                weightInvalid = (weight < MIN_WEIGHT || weight > MAX_WEIGHT); 
                
                if(weightInvalid)
                {
                   cout << "***** Invalid weight; please enter a weight in lbs"
                        << " between 50 and 1400. *****\n";
                }
            } while(weightInvalid);
