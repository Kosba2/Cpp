        do
        {   
            cout << setw(PROMPT_WIDTH) << "\nGender: ";
            cin.get(gender);
            cin.ignore(10000, '\n');
            
            genMale        = (gender == 'm' || gender == 'M'); //T if male
            genFemale      = (gender == 'f' || gender == 'F'); //T if female
                             
            genderContinue = (gender != 'x' && gender != 'X'); //T if continuing
            
            //genderInvalid is T if not male, not female and continuing
            genderInvalid  = (!genMale && !genFemale && genderContinue); 
            
            
            if(genderInvalid)
            {
               cout << "***** Invalid gender; please enter M or F *****";
            }
            
        } while(genderInvalid);
