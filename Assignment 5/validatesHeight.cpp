            do
            {   
                cout << setw(PROMPT_WIDTH) << "Height: ";
                cin  >> height;
                cin.ignore(10000, '\n');
                
                //heightInvalid is T if it is within a reasonable range
                heightInvalid = (height < MIN_HEIGHT || height > MAX_HEIGHT); 
                
                if(heightInvalid)
                {
                   cout << "***** Invalid height; please enter a height in"
                        << " inches between 24 and 110. *****\n";
                }
            } while(heightInvalid);
