#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int home()
{
    int id,choice,cgchoice,nchoice;	
    char name[30];
    char address[30];
    char up[5000],na[50],m[500];    
    char com[5000],f[1000];
    printf("\n~~~~~~~~~~~~~~~~~~~~WOMEN AND CHILD DEVELOPMENT DEPARTMENT~~~~~~~~~~~~~~~~~~~~~~");
   printf("\n--------------------------Women Welfare Schemes Under One Canopy--------------------------------------------------");

    printf("\nPress <1> for Citizen of Gujarat");
    printf("\nPress <2> for Government officers");
    printf("\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("\n\n~~~~~~~~~~~~~~~~~~~~CITIZEN OF GUJARAT~~~~~~~~~~~~~~~~~~~~");
    printf("\n Press <1> for all the welfare schemes with eligibility.");
    printf("\n Press <2> for information about application forms and lists of necessary documents.");
   printf("\n Press <3> for District Office Locations and Contacts which support women welfare activities.");
   printf("\n Press <4> for NGOs,CBOs Locations. ");
   printf("\n Press <5> for Shelter Homes,Child Homes.Old age homes Locations.");
   printf("\n Enter choice:");
   scanf("%d",&cgchoice);
    
   switch(cgchoice)
   {
       case 1:
       printf("\n\n---------------Women and Child Development Projects and Initiatives-------------- ");
       printf("\nThe constitution of India resolves to constitute India into a Sovereign Socialist Secular Democratic Republic and secure to all citizens its Fundamental Rights. The Principle of Gender equality grants equality to women and empowers the State to adopt measures of positive discrimination in favor of women ");
       printf("\n\n->Beti Bachao (Save Girl Child)-MATRU VANDANA YATRA ");
      printf("\n\tIn case of Infant Mortality: Beneficiaries are eligible to get benefits under the scheme only one time. In the case of infant mortality, if she has already claimed all three instalments, she will not be able to claim any benefits under the scheme.");
       printf("\n\n-> Balika Samruddhi Yojna-Girl Child Development");
       printf("\n\tThe scheme covers up two girls children born on or after 15th August 1997 in a family living below poverty line as defined by the Government of India. BMS is given as one time grant of Rs. 500/- to mother giving birth to a girl child of B.P.L. families.");
       printf("\n\n -> Swayamsidh Yojna-Self Reliance and empowerment");
       printf("\n\t Swayamsiddha (swayam or self and siddha – the one who has proven capability or is empowered) project was introduced by GOI during 2001 to 2002 replacing the erstwhile Indira Mahila Yojana.  The WCD of Gujarat implements the policy to help rural women be self reliant, gain confidence and learn the art of savings. This project is envisaged in 20 regions at 26 spots covering 1760 villages which include 43,200 women and 2700 initiating helpers. This project has brought women into the mainstream of development in the rural areas of Gujarat.");
        printf("\n\n -> Saraswati Sadhna Yojna");
        printf("\n\t Introduced first in Gujarat, this is an innovative Go Green initiative of the WCD. Provision of Rs. 1 crore has been made under Saraswati Sadhna Yojana to provide bicycles to Scheduled Castes students by the Gujarat Government. A sum of Rs.1500/- is provided to girls below 8th Grade to buy bicycle. Apart from this, provisions are made for students in elementary and high school education to get food and lodging, free of cost");
        printf("\n\n ->Saat Phera Samuh Yojna");
        printf("\n\t Joint marriages are more economical through WCD schemes in Gujarat. Minimum five couples and over, who get married from the scheduled caste whose family income is Rs.11000/- , the couple gets Rs.5000/- in the form of Narmada Shreenidhi Certificate along with Merit Certificate. For organizing the Samuh Lagna, (group marriage), a sum of Rs.1000/- is offered.");
        printf("\n\n -> Chiranjeevi Yojna");
        printf("\n\t It is estimated that in the state of Gujarat about 1.2 million children are born each year. Some mothers who belong to Below Poverty Line (BPL) families are the most vulnerable to death during delivery since they face significant risk owing to their poor socio-economic status and limited access to healthcare services. The Chiranjeevi Yojana implemented by the Government of Gujarat is aimed to encourage the BPL families to improve access to Institutional delivery. Financial assistance is provided for protection to the BPL families, covering their out-of-pocket costs incurred on travel to reach the healthcare facility centre. Assistance of Rs.200/- for transportation expenses with Rs.50/- for the attendant is provided. Approximately, 1,63,609 women have availed the benefit of this scheme");
        
       printf("\n\n -> Sakhi Mandal Yojna");
       printf("\n\t The Project is to enable the poor women, particularly in rural areas of Gujarat to improve their access to resources and consequently strengthen livelihoods and quality of life. Sakhi Mandals are formation of women self help groups based on thrift and credit principles. It provides financial services to accelerate the process of economic development and ensure welfare of women. They are encouraged to foster decision skills and develop a framework of wider range of participation in micro finance development. In one year, the Gujarat Government aims for one lac Sakhi Mandals across the state.");
        printf("\n\n -> Fish Enterpreneur Yojna");
        printf("\n\t Fish Entrepreneur Yojana launched by Ministry of Women and Child Development, Government of Gujarat. A common scenario has been observed among SC or ST  women like unemployment,  dependent, unable to earn bread and butter, to reduce such thing Gujarat government started this scheme to encourage Scheduled Caste or Scheduled Tribe women to sell fishes to be self-reliant. Under this scheme beneficiary woman awarded with financial assistance to establish business and training of 10 days is provided. This scheme is an opportunity presented by Gujarat for women to start a business and become self-employed for the purpose government provides several facilities like financial help to purchase instruments on average Rs. 10,000 per unit cost, 50 percent assistance is given to women. All women belong to Scheduled Caste or Scheduled Tribe and residence of Gujarat state are eligible under this scheme, those who wish to get benefits can apply at Nearest Women and Child Development Department");
        printf("\n Women belong to Scheduled Caste or Scheduled Tribe and residence of Gujarat are eligible under this scheme");
        
       printf("\n\n ->Gaurav Nari Niti - Womens Pride, Gender Equality Yojna");
       printf("\n\t Gaurav Nari Niti launched by Ministry of Women and Child Development, Government of Gujarat. Scheme intensively focuses on gender equality, it is the vision that men and women should be treated equally in social, economic and all other aspects of society, and to not be discriminated against on the basis of their gender. To foster such needs Gujarat government launched a unique initiative to empower women. Under this initiative government ensures that women are treated equally and provides many services, facilities etc. e.g. Economic Environment, Health, and Quality of Life, Non-Violence, Education, Advocacy and Capacity Building etc. in order to empower women in the state. This scheme encourages women SHGs to take up activities like contract farming, farm services, processing, marketing of dairy and poultry and agricultural product etc. and scheme makes sure All women resident of Gujarat can get benefits of the scheme. More information can be obtained from nearest women and child development department.");
       printf("\n\n -> Kishori Shakti Yojna - Adolscents,Strenth and Awareness");
       printf("\n\t An intervention for adolescent girls (11-18 years) the Kishori Shakti Yojana (KSY) was launched in 2000-01 as part of the ICDS scheme. Kishori Shakti Yojana being implemented through Anganwadi Centres in both rural and urban areas. The scheme aims at breaking the intergenerational life-cycle of nutritional and gender disadvantage and providing a supportive environment for self-development. The objectives of the Scheme are to improve the nutritional and health status of girls in the age group of 11-18 years. A group of ten girls in a batch, who would be expectant mothers in future, are given Health Check up by Anganwadi centres. They are also provided required literacy and numeracy skills, stimulation to social exposure and knowledge to help them improve their decision making skills. The adolescent girls are given home based and vocational skills, awareness on health, hygiene, nutrition, family welfare, home management and child care guidance with measures to facilitate marrying after marriage age of 18 years. They are encouraged for productive and constructive activities for their own development as well as for their family.");
       
       printf("\n\n ->Vidhva Sahay and Talim Yojna");
       printf("\n\t The Department is sensitive towards women 18-40 years, who have lost their husbands and initiates policy for their empowerment and economic living condition. For their economical living, under Manav Garima Yojna, Rs. 3000/- margin money is given to help them stand on their feet on their own and empower living. Women in the age group of 18-60 years are provided monetary help by way of application. The applicant gets Rs.500/- and two children gets Rs.80/- (per child) every month through Post Office.");
       
       printf("\n\n ->Kunverbai nu Mameru Scheme");
       printf("\n\t Women and Child Development makes provisions for monetary help to scheduled caste for their daughters marriage under Kunverbai nu mameru scheme. Those who gets an annual income of Rs 11,000/- can avail Rs 5000/- for their one daughters marriage. For this, Rs 2000/- are given to girls parents/guardian and Rs 3000/- is given to the girl in the form of Kisan Vikas Patra");
       printf("\n\n -> Nari Adalat");
       printf("\n\t The concept devised By women for women - the Nari Adalats is operational for legal justice in over 19 regions in Gujarat. Women jurists dispense justice in women cases of divorce, abandonment, violence, rape and dowry demands. These courts are set up for women empowerment and gender justice. These courts are not recognized by the State as a legal forum. However, the autonomous hybrid institutions are para legal authority who solve women cases faster than judicial courts. These courts are helping rural women overcome problems encountered in the normal judicial system. Inaccessibility, cost, time, unfamiliarity with legal procedures, inadequate resources, and a traditional disregard of the needs of women – all solutions get speedy, efficacy, and cost effective. ");
       printf("\n\n -> Krishi Talim Yojna");
       printf("\n\t Krishi Talim – Training in the field of Agriculture is imparted to Women Farmers and Farmers wives for Research and use of latest technology. These Agricultural women are paid stipend and transportation for the training course.");
   
   printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n Press <1> for complaints.");
   printf("\n Press <2> for feedback.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Complaint-----------------");
   		printf("\n Please enter the complaint for any schemes relates issue and any other inconvenience:");
   		scanf("%s",&com);
   		printf("We are sorry for the inconvenience %s :( \n We will surely improve our services.",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Review-----------------");
   		printf("\nKindly enter your review here:");
   		scanf("%s",&f);
   		printf("Thank You %s for your valuable feedback :)",na);
   		break;
   }
      break;
       case 2:
       printf("\n\n Information about Application Forms and lists of necessary documents");
        printf("\n\t\t\t\tDocuments Needed for application forms");
       printf("\n ->Proof of Identity of the Parents");
       printf("\n -> Ration Card");
       printf("\n -> Aadhar Card Identity Proof");
       printf("\n ->PAN Card");
       printf("\n ->Financial background of applicants (BPL Certificate)");
       printf("\n ->School Admission documents/Final examination mark sheet");
       printf("\n ->Passport size photograph");
       printf("\n ->Caste certificate ,BPL Ration card(if available)");
       printf("\n -> Residence proof ");
       printf("\n -> Identity proof ") ;
       printf("\n -> Age proof: Birth certificate");
       printf("\n ->Residence Proof (Domicile certificate of Gujarat)");
       printf("\n------------------VIDHVA SAHAY YOJNA ----------------");
       printf("\n  Widow certificate / death certificate of husband (if available), Report signed by Patwari or Municipal Councilor, Passport size photograph");
       printf("\n------------------KUNVERBAI NU MAMERU---------------------");
       printf("\n ➤ Aadhar Card of candidate, Voter Identity Card, Domicile Certificate, Family income details, Caste Certificate, Age proof of girl child,Passport size photograph, details of bank passbook,invitation of girls marriage");
       printf("\n-----------------NARI ADALAT---------------------");
       printf("\n  ➤ Residence proof: Domicile certificate. Identity proof: Aadhar card, Voter ID, PAN card. Passport size photograph");
       printf("\n ------------------KRISHI TALIM YOJNA-----------------");
       printf("\n  ➤ Residence proof: Domicile certificate, Electricity bill. Identity proof: Aadhar card, Voter ID. BPL card (if available) Widow certificate (if available) Passport size photograph. Death certificate of husband (if available) 7/12 of farm. Income certificate.");
    printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n Press <1> for complaints.");
   
   printf("\n Press <2> for feedback.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Complaint-----------------");
   		printf("\n Please enter the complaint for any schemes relates issue and any other inconvenience:");
   		scanf("%s",&com);
   		printf("We are sorry for the inconvenience %s :( \n We will surely improve our services.",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Review-----------------");
   		printf("\nKindly enter your review here:");
   		scanf("%s",&f);
   		printf("Thank You %s for your valuable feedback :)",na);
   		break;
   }
     break;
      case 3:
       printf("\n\n=====LOCATION OF DISTRICT OFFICE AND CONTACTS FOR WOMEN WELFARE ACTIVITES=====");
      printf("\n\n-> 181 Abhayam Mahila Helpline:It is functional in all Districts of the State. Women in distress may seek immediate help and rescue services from the Abhayam 181 Helpline.") ;
      printf("\n\n-> Women and Child Development Department,Gujarat:Block 9, 6th Floor, Sardar Bhavan, Sector 10, Gandhinagar, Gujarat 382010 Phone: 079 2325 7942");
      printf("\n\n-> Maa Kaamal Woman Welfare Foundation:Maa Kaamal Street, Begampura, Cinema Road, Surat-395003 (Gujarat), India Helpline: +91- 6356363630, +91- 6356363635");
     
   printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n Press <1> for complaints.");
   printf("\n Press <2> for feedback.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Complaint-----------------");
   		printf("\n Please enter the complaint for any schemes relates issue and any other inconvenience:");
   		scanf("%s",&com);
   		printf("We are sorry for the inconvenience %s :( \n We will surely improve our services.",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Review-----------------");
   		printf("\nKindly enter your review here:");
   		scanf("%s",&f);
   		printf("Thank You %s for your valuable feedback :)",na);
   		break;
   }
      break;
      case 4:
      printf("\nNAME OF NGO: Hariraj Charitable Trust");
      printf("\nCAUSE: Children development");
      printf("\nADDRESS:26-Omnagar(3), Behind GIDC, Hnumanpara road, Amreli - 365601");
       printf("\nNAME OF NGO: Humankind Humankind");
      printf("\nCAUSE: Education & Literacy");
      printf("\nADDRESS: F/3, Nanakram Super Market, Ramnagar, Sabarmati, Ahmedabad");
       printf("\nNAME OF NGO:Lokseva Sikshan Vikas Trust");
      printf("\nCAUSE: Education");
      printf("\nADDRESS:C/O: Lokseva Hospital, Opp.bhagyoday Hotel Ambaji high way, Ratanpur (Danta),Block- Danta District-Banaskantha");
       printf("\nNAME OF NGO:Sense International India");
      printf("\nCAUSE: Education");
      printf("\nADDRESS:Sense International India 2nd Floor, Administrative Block, Andhajan Mandal Campus, Opp. IIM Vastrapur");
       printf("\nNAME OF NGO: Aadhar Foundation");
printf("\nCAUSE:Children");
printf("\nADDRESS:15, RAMESHWARNAGAR, OPP. NIRMA, MODHERA ROAD, MEHSANA-2, PIN-384002");

printf("\nNAME OF NGO:Aadhar trust");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:B/211-Tulsi complex,near-sahyog society, gorwa,vadodara");

printf("\nNAME OF NGO: Aadhar Welfare Trust");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:20-MIRADATAR COMPLEX , OPP.MUNICIPALITY, POST OFFICE ROAD");

printf("\nNAME OF NGO:Aadivan Vivdhlaxi Vikas Trust");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:Aadivan vivdhlaxi vikas trust, c/o prakash bhuria, chandan chal, godhra road, dahod. ta.dist.dahod - 389151");

printf("\nNAME OF NGO:Aanchal Foundation");
printf("\nCAUSE:Children");
printf("\nADDRESS:");
printf("\nRegistered Office : 404, Advait, Near Sandesh Press, Vastrapur, Ahmedabad-380 054");
printf("\nBusiness Office : City Plaza, Sterling City, Bopal, Ahmedabad");

printf("\nNAME OF NGO:Aarsh Vidhya Prasharan Sansthan Rajkot");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:RAJKOT-BHAVNAGAR HIGHWAY, KASTURBADHAM(TRAMBA) RAJKOT");

printf("\nNAME OF NGO:Akhil Gujarat Hastkala Karigar Sangh");
printf("\nCAUSE:Womens Development & Empowerment");
printf("\nADDRESS:602,Arved Transcube Plaza, R.T.O., Ahmedabad");
  
   printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n Press <1> for complaints.");
   printf("\n Press <2> for feedback.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Complaint-----------------");
   		printf("\n Please enter the complaint for any schemes relates issue and any other inconvenience:");
   		scanf("%s",&com);
   		printf("We are sorry for the inconvenience %s :( \n We will surely improve our services.",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Review-----------------");
   		printf("\nKindly enter your review here:");
   		scanf("%s",&f);
   		printf("Thank You %s for your valuable feedback :)",na);
   		break;
   }
      break;
    case 5:
    printf("-----------------SHELTER HOMES--------------------");
    printf("Mahila Housing SEWA Trust (MHT):" );
	printf("\nAddress:7th Floor, Sakar 4, Ashram Rd, Ellisbridge, Ahmedabad, Gujarat 380009 " );
	printf("\nContact Number:079 2658 7725" );
	printf("\nWebsite:http://mahilahousingtrust.org" );
	printf("\nThe Mahila Housing SEWA Trust is a social organization, helping women organize themselves into local groups to impact their environment; the growth of Resident Welfare Associations, Community Based Organizations and their Federation (the Vikasini) through MHT support has proved to be a remarkable development." );

	printf("\nAWAG:" );
	printf("\nCause:Womens Shelters" );
	printf("\nAddress:506, Bhudarpura, Ambawadi, Ahmedabad, Gujarat 380015" );
	printf("\nContact Number:079 2644 1214" );
	printf("\nWebsite:http://www.awagindia.org/" );
	printf("\nSupporting adolescent girls and women for equitable access, control, decision making and mobility in their lives.Sensitizing the societal forces towards changing the mindsets and behaviour of various stakeholders of the society towards empowerment of less privileged women" );

	printf("\nHOPE Foundtaion:" );
	printf("\nCause:Education,Health,Homeless Shelters" );
	printf("\nAddress:105, Vijay Cross Rd, Professors Colony, Vijay Char Rasta, Navrangpura, Ahmedabad, Gujarat 380009" );
	printf("\nContact Number:099789 19040" );
	printf("\nWebsite:http://www.hopefoundation.org.in" );
	printf("\nHOPE foundation works to bring about change in the lives of children, young people and vulnerable individuals. We educate children. We provide healthcare. We give children, women and the aged a safe home. We train young people for a living. Afterwards, we help them find jobs and even start their own businesses." );

	printf("\nManav Kartavya" );
	printf("\nCause:Education,Womens Shelters,Homeless Shelters,Health" );
	printf("\nAddress:301 Abhishree Adroit, Near Swaminarayan Temple, Mansi Circle, Vastrapur, Ahmedabad-380015" );
	printf("\nContact Number:9277008800" );
	printf("\nWebsite:http://manavkartavya.org/" );
printf("\n\n-----------------------OLD AGE HOMES-----------------------");
printf("\nKRISHNA DHAM OLD AGE HOME:");
printf("\nAddress:3 Chaitanya Society Between Vastrapur Gam Bus Stand Aandh Jan Mandal IIM Road beside  Kendriya Vidhal, Ahmedabad, GJ 380015");
printf("\nKrishna Dham Old Age Home is a heaven for all needy seniors and started to provide assistance and care for the old aged people. The home is dedicated to extending much-needed care and happiness to the elders despite their age. All their dedicated staff are compassionate, kind, and respectful towards the people in the home. Krishna Dham Old Age Home has a vast range of fully equipped and furnished rooms to suit your needs and comfort levels. You can serve food at any special occasion to their old age home.");
printf("\nJEEVAN SANDHYA OLD AGE HOME");
printf("\nAddress:Near Ankur Bus Stop, Near Kalptaru Part 1 & 2, Passby: 132 Ring Road, Naranpura,Ahmedabad, GJ 380013");
printf("\nJeevan Sandhya Old Age Home is one of the best and most well-known nursing homes in the area. Dr Bachabai Nanavati founded the home to provide exceptional care to all elders and senior citizens. Jeevan Sandhya Old Age Home features a spacious and most beautiful building to accommodate 200 aged people and is an excellent place to realise the value of parents.");

printf("\nJIVANDHARA OLD AGE HOME");
printf("\nAddress:Part 2, Padmavati Nagar, Indira Nagar, Lambha, Ahmedabad, GJ 380009 Since 2002");
printf("\nJivandhara Old Age Home is located at the heart of Lambha, Ahmedabad. Their home has served hundreds of seniors and needy elders in the past 13 years. The house has features with fifty fully furnished and clean rooms and medical centres. Late Shri. Champaklal G. Shah is the founder of the house. He has started the house with five rooms, a dining hall, mandir and garden. Jivandhara Old Age Home strives to provide all needy elders the utmost care and services. Their blind, bedridden, paralysed seniors citizens have a separate facility, providing life-long stays in the nursing home.");
printf("\nSwarg Community Care Ahmedabad");
printf("\nAddress:Plot 128, Greenwood phase 1, Garden city road, Sardar Patel Ring Rd, near Vaishnav Devi Circle, Ognaj, Ahmedabad, Gujarat 380060");

printf("\nSHANTINIKETAN SENIOR LIVING");
printf("\nAddress:Navdeep Sankul, Nr. Central Warehouse, Sabarmati Chandkheda, Kalol Road, Adalaj, Gujarat 382421");
printf("\n\n------------------------CHILD HOMES-------------------------");
printf("\nChildren Home, Odhav");
printf("\nAddress:Opp.Police choki, GIDC,Odhav-Ahmedabad");
printf("\nPhone Number:079 22871023");
printf("\nChildren Home for Boys,Khanpur ");
printf("\nAddress:Near Kama Hotel, Khanpur, Ahmedabad");
printf("\nPhone Number:971494910");
printf("\nChildren Home for Girls,Sultan Ahmad Yatim Khana");
printf("\nAddress:Opp Sultan Ahemad Yatimkhana G.P.O, Salapa Road, Ahmedabad");
printf("\nPhone Number:079 25507110");
printf("\nVikas Gruh, paldi ");
printf("\nAddress:Opp Sharda Nagar Society, Post Paladi Dhumketu Marg, Paladi, Ahmedabad");
printf("\nPhone Number:079 26612788 079 26688788");
printf("\nBalghar Anathashram, Shri Sarvoday Saraswati Mandir");
printf("\nAddress:At.Babapur, Tal : Amreli");
printf("\nPhone Number:02792 277007");
printf("\nChildren Home for Boys, Anand");
printf("\nAddress:Madhudeep Bungalow, Near Gayatri Dining Hall, Nana Bazar, Vallabh Vidhyanagar, Anand-388120");
printf("\nPhone Number:02692 235336");
printf("\nJivan Anand Cheritable Trust");
printf("\nAddress:Enterprise Society, St.Xavier’s road, Padharia, ANAND-388 001, (Gujarat)");
printf("\nPhone Number:9924333518");
printf("\nShri Kasturba Stri Vikas Gruh");
printf("\nAddress:Patel Colony, KasturbaGandhi Marg,Jamnagar-361008");
printf("\nPhone Number:0288 2751728 2676983");
printf("\nShishumangal Trust");
printf("\nAddress:Opp Collector Banglow, Gandhigram, Junagadh-362001");
printf("\nPhone Number:0285 2623433");
printf("\nPradeshik Bal Sanrakshan Mandal Sanchalit Children Home");
printf("\nAddress:Opposite Judges Colony, Manjipura Road, Nadiad, Dist. Kheda");
printf("\nPhone Number:0268 25666498 9428486190");

   printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n\n WILL YOU PLEASE GIVE US A REVIEW?"); printf("\n Press <1> for complaints.");
   printf("\n Press <2> for feedback.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Complaint-----------------");
   		printf("\n Please enter the complaint for any schemes relates issue and any other inconvenience:");
   		scanf("%s",&com);
   		printf("We are sorry for the inconvenience %s :( \n We will surely improve our services.",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Enter Review-----------------");
   		printf("\nKindly enter your review here:");
   		scanf("%s",&f);
   		printf("Thank You %s for your valuable feedback :)",na);
   		break;
   }
break;


      } break;
      
   case 2:
   	 printf("\n\n~~~~~~~~~~~~~~~~~~~~GOVERNMENT OFFICERS~~~~~~~~~~~~~~~~~~~~");
    printf("\n Press <1> for all the welfare schemes with eligibility.");
    printf("\n Press <2> for information about application forms and lists of necessary documents.");
   printf("\n Press <3> for District Office Locations and Contacts which support women welfare activities.");
   printf("\n Press <4> for NGOs,CBOs Locations. ");
   printf("\n Press <5> for Shelter Homes,Child Homes.Old age homes Locations.");
   printf("\n Enter choice:");
   scanf("%d",&cgchoice);
    
   switch(cgchoice)
   {
       case 1:
       printf("\n\n---------------Women and Child Development Projects and Initiatives-------------- ");
       printf("\nThe constitution of India resolves to constitute India into a Sovereign Socialist Secular Democratic Republic and secure to all citizens its Fundamental Rights. The Principle of Gender equality grants equality to women and empowers the State to adopt measures of positive discrimination in favor of women ");
       printf("\n\n->Beti Bachao (Save Girl Child)-MATRU VANDANA YATRA ");
      printf("\n\tIn case of Infant Mortality: Beneficiaries are eligible to get benefits under the scheme only one time. In the case of infant mortality, if she has already claimed all three instalments, she will not be able to claim any benefits under the scheme.");
       printf("\n\n-> Balika Samruddhi Yojna-Girl Child Development");
       printf("\n\tThe scheme covers up two girls children born on or after 15th August 1997 in a family living below poverty line as defined by the Government of India. BMS is given as one time grant of Rs. 500/- to mother giving birth to a girl child of B.P.L. families.");
       printf("\n\n -> Swayamsidh Yojna-Self Reliance and empowerment");
       printf("\n\t Swayamsiddha (swayam or self and siddha – the one who has proven capability or is empowered) project was introduced by GOI during 2001 to 2002 replacing the erstwhile Indira Mahila Yojana.  The WCD of Gujarat implements the policy to help rural women be self reliant, gain confidence and learn the art of savings. This project is envisaged in 20 regions at 26 spots covering 1760 villages which include 43,200 women and 2700 initiating helpers. This project has brought women into the mainstream of development in the rural areas of Gujarat.");
        printf("\n\n -> Saraswati Sadhna Yojna");
        printf("\n\t Introduced first in Gujarat, this is an innovative Go Green initiative of the WCD. Provision of Rs. 1 crore has been made under Saraswati Sadhna Yojana to provide bicycles to Scheduled Castes students by the Gujarat Government. A sum of Rs.1500/- is provided to girls below 8th Grade to buy bicycle. Apart from this, provisions are made for students in elementary and high school education to get food and lodging, free of cost");
        printf("\n\n ->Saat Phera Samuh Yojna");
        printf("\n\t Joint marriages are more economical through WCD schemes in Gujarat. Minimum five couples and over, who get married from the scheduled caste whose family income is Rs.11000/- , the couple gets Rs.5000/- in the form of Narmada Shreenidhi Certificate along with Merit Certificate. For organizing the Samuh Lagna, (group marriage), a sum of Rs.1000/- is offered.");
        printf("\n\n -> Chiranjeevi Yojna");
        printf("\n\t It is estimated that in the state of Gujarat about 1.2 million children are born each year. Some mothers who belong to Below Poverty Line (BPL) families are the most vulnerable to death during delivery since they face significant risk owing to their poor socio-economic status and limited access to healthcare services. The Chiranjeevi Yojana implemented by the Government of Gujarat is aimed to encourage the BPL families to improve access to Institutional delivery. Financial assistance is provided for protection to the BPL families, covering their out-of-pocket costs incurred on travel to reach the healthcare facility centre. Assistance of Rs.200/- for transportation expenses with Rs.50/- for the attendant is provided. Approximately, 1,63,609 women have availed the benefit of this scheme");
        
       printf("\n\n -> Sakhi Mandal Yojna");
       printf("\n\t The Project is to enable the poor women, particularly in rural areas of Gujarat to improve their access to resources and consequently strengthen livelihoods and quality of life. Sakhi Mandals are formation of women self help groups based on thrift and credit principles. It provides financial services to accelerate the process of economic development and ensure welfare of women. They are encouraged to foster decision skills and develop a framework of wider range of participation in micro finance development. In one year, the Gujarat Government aims for one lac Sakhi Mandals across the state.");
        printf("\n\n -> Fish Enterpreneur Yojna");
        printf("\n\t Fish Entrepreneur Yojana launched by Ministry of Women and Child Development, Government of Gujarat. A common scenario has been observed among SC or ST  women like unemployment,  dependent, unable to earn bread and butter, to reduce such thing Gujarat government started this scheme to encourage Scheduled Caste or Scheduled Tribe women to sell fishes to be self-reliant. Under this scheme beneficiary woman awarded with financial assistance to establish business and training of 10 days is provided. This scheme is an opportunity presented by Gujarat for women to start a business and become self-employed for the purpose government provides several facilities like financial help to purchase instruments on average Rs. 10,000 per unit cost, 50 percent assistance is given to women. All women belong to Scheduled Caste or Scheduled Tribe and residence of Gujarat state are eligible under this scheme, those who wish to get benefits can apply at Nearest Women and Child Development Department");
        printf("\n Women belong to Scheduled Caste or Scheduled Tribe and residence of Gujarat are eligible under this scheme");
        
       printf("\n\n ->Gaurav Nari Niti - Womess Pride, Gender Equality Yojna");
       printf("\n\t Gaurav Nari Niti launched by Ministry of Women and Child Development, Government of Gujarat. Scheme intensively focuses on gender equality, it is the vision that men and women should be treated equally in social, economic and all other aspects of society, and to not be discriminated against on the basis of their gender. To foster such needs Gujarat government launched a unique initiative to empower women. Under this initiative government ensures that women are treated equally and provides many services, facilities etc. e.g. Economic Environment, Health, and Quality of Life, Non-Violence, Education, Advocacy and Capacity Building etc. in order to empower women in the state. This scheme encourages women SHGs to take up activities like contract farming, farm services, processing, marketing of dairy and poultry and agricultural product etc. and scheme makes sure All women resident of Gujarat can get benefits of the scheme. More information can be obtained from nearest women and child development department.");
       printf("\n\n -> Kishori Shakti Yojna - Adolscents,Strenth and Awareness");
       printf("\n\t An intervention for adolescent girls (11-18 years) the Kishori Shakti Yojana (KSY) was launched in 2000-01 as part of the ICDS scheme. Kishori Shakti Yojana being implemented through Anganwadi Centres in both rural and urban areas. The scheme aims at breaking the intergenerational life-cycle of nutritional and gender disadvantage and providing a supportive environment for self-development. The objectives of the Scheme are to improve the nutritional and health status of girls in the age group of 11-18 years. A group of ten girls in a batch, who would be expectant mothers in future, are given Health Check up by Anganwadi centres. They are also provided required literacy and numeracy skills, stimulation to social exposure and knowledge to help them improve their decision making skills. The adolescent girls are given home based and vocational skills, awareness on health, hygiene, nutrition, family welfare, home management and child care guidance with measures to facilitate marrying after marriage age of 18 years. They are encouraged for productive and constructive activities for their own development as well as for their family.");
       
       printf("\n\n ->Vidhva Sahay and Talim Yojna");
       printf("\n\t The Department is sensitive towards women 18-40 years, who have lost their husbands and initiates policy for their empowerment and economic living condition. For their economical living, under Manav Garima Yojna, Rs. 3000/- margin money is given to help them stand on their feet on their own and empower living. Women in the age group of 18-60 years are provided monetary help by way of application. The applicant gets Rs.500/- and two children gets Rs.80/- (per child) every month through Post Office.");
       
       printf("\n\n ->Kunverbai nu Mameru Scheme");
       printf("\n\t Women and Child Development makes provisions for monetary help to scheduled caste for their daughters marriage under Kunverbai nu mameru scheme. Those who gets an annual income of Rs 11,000/- can avail Rs 5000/- for their one daughters marriage. For this, Rs 2000/- are given to girls parents/guardian and Rs 3000/- is given to the girl in the form of Kisan Vikas Patra");
       printf("\n\n -> Nari Adalat");
       printf("\n\t The concept devised By women for women - the Nari Adalats is operational for legal justice in over 19 regions in Gujarat. Women jurists dispense justice in women cases of divorce, abandonment, violence, rape and dowry demands. These courts are set up for women empowerment and gender justice. These courts are not recognized by the State as a legal forum. However, the autonomous hybrid institutions are para legal authority who solve women cases faster than judicial courts. These courts are helping rural women overcome problems encountered in the normal judicial system. Inaccessibility, cost, time, unfamiliarity with legal procedures, inadequate resources, and a traditional disregard of the needs of women – all solutions get speedy, efficacy, and cost effective. ");
       printf("\n\n -> Krishi Talim Yojna");
       printf("\n\t Krishi Talim – Training in the field of Agriculture is imparted to Women Farmers and Farmers wives for Research and use of latest technology. These Agricultural women are paid stipend and transportation for the training course.");
     
   printf("\n Press <1> to update information.");
   printf("\n Press <2> for messages to citizens.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Update Information-----------------");
   		printf("\n Enter the information for the updation:");
   		scanf("%s",&up);
   		printf("Thank you %s for the updates:)",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Give message to citizens-----------------");
   		printf("\n Enter the message that is needed to be printed:");
   		scanf("%s",&m);
   		printf("%s,Your Message would be send to logged in users:)",na);
   		break;
   }
   break; 
      break;
       case 2:
       printf("\n\n Information about Application Forms and lists of necessary documents");
        printf("\n\t\t\t\tDocuments Needed for application forms");
       printf("\n ->Proof of Identity of the Parents");
       printf("\n -> Ration Card");
       printf("\n -> Aadhar Card Identity Proof");
       printf("\n ->PAN Card");
       printf("\n ->Financial background of applicants (BPL Certificate)");
       printf("\n ->School Admission documents/Final examination mark sheet");
       printf("\n ->Passport size photograph");
       printf("\n ->Caste certificate ,BPL Ration card(if available)");
       printf("\n -> Residence proof ");
       printf("\n -> Identity proof ") ;
       printf("\n -> Age proof: Birth certificate");
       printf("\n ->Residence Proof (Domicile certificate of Gujarat)");
       printf("\n------------------VIDHVA SAHAY YOJNA ----------------");
       printf("\n  Widow certificate / death certificate of husband (if available), Report signed by Patwari or Municipal Councilor, Passport size photograph");
       printf("\n------------------KUNVERBAI NU MAMERU---------------------");
       printf("\n ➤ Aadhar Card of candidate, Voter Identity Card, Domicile Certificate, Family income details, Caste Certificate, Age proof of girl child,Passport size photograph, details of bank passbook,invitation of girls marriage");
       printf("\n-----------------NARI ADALAT---------------------");
       printf("\n  ➤ Residence proof: Domicile certificate. Identity proof: Aadhar card, Voter ID, PAN card. Passport size photograph");
       printf("\n ------------------KRISHI TALIM YOJNA-----------------");
       printf("\n  ➤ Residence proof: Domicile certificate, Electricity bill. Identity proof: Aadhar card, Voter ID. BPL card (if available) Widow certificate (if available) Passport size photograph. Death certificate of husband (if available) 7/12 of farm. Income certificate.");
     
   printf("\n Press <1> to update information.");
   printf("\n Press <2> for messages to citizens.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Update Information-----------------");
   		printf("\n Enter the information for the updation:");
   		scanf("%s",&up);
   		printf("Thank you %s for the updates:)",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Give message to citizens-----------------");
   		printf("\n Enter the message that is needed to be printed:");
   		scanf("%s",&m);
   		printf("%s,Your Message would be send to logged in users:)",na);
   		break;
   }
   break;
     break;
      case 3:
       printf("\n\n=====LOCATION OF DISTRICT OFFICE AND CONTACTS FOR WOMEN WELFARE ACTIVITES=====");
      printf("\n\n-> 181 Abhayam Mahila Helpline:It is functional in all Districts of the State. Women in distress may seek immediate help and rescue services from the Abhayam 181 Helpline.") ;
      printf("\n\n-> Women and Child Development Department,Gujarat:Block 9, 6th Floor, Sardar Bhavan, Sector 10, Gandhinagar, Gujarat 382010 Phone: 079 2325 7942");
      printf("\n\n-> Maa Kaamal Woman Welfare Foundation:Maa Kaamal Street, Begampura, Cinema Road, Surat-395003 (Gujarat), India Helpline: +91- 6356363630, +91- 6356363635");
     
   printf("\n Press <1> to update information.");
   printf("\n Press <2> for messages to citizens.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Update Information-----------------");
   		printf("\n Enter the information for the updation:");
   		scanf("%s",&up);
   		printf("Thank you %s for the updates:)",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Give message to citizens-----------------");
   		printf("\n Enter the message that is needed to be printed:");
   		scanf("%s",&m);
   		printf("%s,Your Message would be send to logged in users:)",na);
   		break;
   }
   break;
      break;
      case 4:
      printf("\nNAME OF NGO: Hariraj Charitable Trust");
      printf("\nCAUSE: Children development");
      printf("\nADDRESS:26-Omnagar(3), Behind GIDC, Hnumanpara road, Amreli - 365601");
       printf("\nNAME OF NGO: Humankind Humankind");
      printf("\nCAUSE: Education & Literacy");
      printf("\nADDRESS: F/3, Nanakram Super Market, Ramnagar, Sabarmati, Ahmedabad");
       printf("\nNAME OF NGO:Lokseva Sikshan Vikas Trust");
      printf("\nCAUSE: Education");
      printf("\nADDRESS:C/O: Lokseva Hospital, Opp.bhagyoday Hotel Ambaji high way, Ratanpur (Danta),Block- Danta District-Banaskantha");
       printf("\nNAME OF NGO:Sense International India");
      printf("\nCAUSE: Education");
      printf("\nADDRESS:Sense International India 2nd Floor, Administrative Block, Andhajan Mandal Campus, Opp. IIM Vastrapur,");
      
  printf("\nNAME OF NGO: Aadhar Foundation");
printf("\nCAUSE:Children");
printf("\nADDRESS:15, RAMESHWARNAGAR, OPP. NIRMA, MODHERA ROAD, MEHSANA-2, PIN-384002");

printf("\nNAME OF NGO:Aadhar trust");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:B/211-Tulsi complex,near-sahyog society, gorwa,vadodara");

printf("\nNAME OF NGO: Aadhar Welfare Trust");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:20-MIRADATAR COMPLEX , OPP.MUNICIPALITY, POST OFFICE ROAD");

printf("\nNAME OF NGO:Aadivan Vivdhlaxi Vikas Trust");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:Aadivan vivdhlaxi vikas trust, c/o prakash bhuria, chandan chal, godhra road, dahod. ta.dist.dahod - 389151");

printf("\nNAME OF NGO:Aanchal Foundation");
printf("\nCAUSE:Children");
printf("\nADDRESS:");
printf("\nRegistered Office : 404, Advait, Near Sandesh Press, Vastrapur, Ahmedabad-380 054,");
printf("\nBusiness Office : City Plaza, Sterling City, Bopal, Ahmedabad");

printf("\nNAME OF NGO:Aarsh Vidhya Prasharan Sansthan Rajkot");
printf("\nCAUSE:Education & Literacy");
printf("\nADDRESS:RAJKOT-BHAVNAGAR HIGHWAY, KASTURBADHAM(TRAMBA) RAJKOT");

printf("\nNAME OF NGO:Akhil Gujarat Hastkala Karigar Sangh");
printf("\nCAUSE:Womens Development & Empowerment");
printf("\nADDRESS:602,Arved Transcube Plaza, R.T.O., Ahmedabad");
 
   printf("\n Press <1> to update information.");
   printf("\n Press <2> for messages to citizens.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Update Information-----------------");
   		printf("\n Enter the information for the updation:");
   		scanf("%s",&up);
   		printf("Thank you %s for the updates:)",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Give message to citizens-----------------");
   		printf("\n Enter the message that is needed to be printed:");
   		scanf("%s",&m);
   		printf("%s,Your Message would be send to logged in users:)",na);
   		break;
   }
   break;
      break;
    case 5:
    printf("-----------------SHELTER HOMES--------------------");
    printf("Mahila Housing SEWA Trust (MHT):" ); 
	printf("\nAddress:7th Floor, Sakar 4, Ashram Rd, Ellisbridge, Ahmedabad, Gujarat 380009 " );
	printf("\nContact Number:079 2658 7725" );
	printf("\nWebsite:http://mahilahousingtrust.org" );
	printf("\nThe Mahila Housing SEWA Trust is a social organization, helping women organize themselves into local groups to impact their environment; the growth of Resident Welfare Associations, Community Based Organizations and their Federation (the Vikasini) through MHT support has proved to be a remarkable development." );

	printf("\nAWAG:" );
	printf("\nCause:Womens Shelters" ); 
	printf("\nAddress:506, Bhudarpura, Ambawadi, Ahmedabad, Gujarat 380015 " );
	printf("\nContact Number:079 2644 1214 " );
	printf("\nWebsite:http://www.awagindia.org/" );
	printf("\nSupporting adolescent girls and women for equitable access, control, decision making and mobility in their lives.Sensitizing the societal forces towards changing the mindsets and behaviour of various stakeholders of the society towards empowerment of less privileged women" );

	printf("\nHOPE Foundtaion:" );
	printf("\nCause:Education,Health,Homeless Shelters" );
	printf("\nAddress:105, Vijay Cross Rd, Professors Colony, Vijay Char Rasta, Navrangpura, Ahmedabad, Gujarat 380009" );
	printf("\nContact Number:099789 19040" );
	printf("\nWebsite:http://www.hopefoundation.org.in" );
	printf("\nHOPEfoundationworks to bring about change in the lives of children, young people and vulnerable individuals. We educate children. We provide healthcare. We give children, women and the aged a safe home. We train young people for a living. Afterwards, we help them find jobs and even start their own businesses." );

	printf("\nManav Kartavya" );
	printf("\nCause:Education,Womens Shelters,Homeless Shelters,Health" );
	printf("\nAddress:301 Abhishree Adroit, Near Swaminarayan Temple, Mansi Circle, Vastrapur, Ahmedabad-380015" );
	printf("\nContact Number:9277008800" );
	printf("\nWebsite:http://manavkartavya.org/" );
printf("\n\n-----------------------OLD AGE HOMES-----------------------");
printf("\nKRISHNA DHAM OLD AGE HOME:");
printf("\nAddress:3 Chaitanya Society Between Vastrapur Gam Bus Stand Aandh Jan Mandal IIM Road beside  Kendriya Vidhal, Ahmedabad, GJ 380015");
printf("\nKrishna Dham Old Age Home is a heaven for all needy seniors and started to provide assistance and care for the old aged people. The home is dedicated to extending much-needed care and happiness to the elders despite their age. All their dedicated staff are compassionate, kind, and respectful towards the people in the home. Krishna Dham Old Age Home has a vast range of fully equipped and furnished rooms to suit your needs and comfort levels. You can serve food at any special occasion to their old age home.");
printf("\nJEEVAN SANDHYA OLD AGE HOME");
printf("\nAddress:Near Ankur Bus Stop, Near Kalptaru Part 1 & 2, Passby: 132 Ring Road, Naranpura,Ahmedabad, GJ 380013");
printf("\nJeevan Sandhya Old Age Home is one of the best and most well-known nursing homes in the area. Dr Bachabai Nanavati founded the home to provide exceptional care to all elders and senior citizens. Jeevan Sandhya Old Age Home features a spacious and most beautiful building to accommodate 200 aged people and is an excellent place to realise the value of parents.");

printf("\nJIVANDHARA OLD AGE HOME");
printf("\nAddress:Part 2, Padmavati Nagar, Indira Nagar, Lambha, Ahmedabad, GJ 380009 Since 2002");
printf("\nJivandhara Old Age Home is located at the heart of Lambha, Ahmedabad. Their home has served hundreds of seniors and needy elders in the past 13 years. The house has features with fifty fully furnished and clean rooms and medical centres. Late Shri. Champaklal G. Shah is the founder of the house. He has started the house with five rooms, a dining hall, mandir and garden. Jivandhara Old Age Home strives to provide all needy elders the utmost care and services. Their blind, bedridden, paralysed seniors citizens have a separate facility, providing life-long stays in the nursing home.");
printf("\nSwarg Community Care Ahmedabad");
printf("\nAddress:Plot 128, Greenwood phase 1, Garden city road, Sardar Patel Ring Rd, near Vaishnav Devi Circle, Ognaj, Ahmedabad, Gujarat 380060");

printf("\nSHANTINIKETAN SENIOR LIVING");
printf("\nAddress:Navdeep Sankul, Nr. Central Warehouse, Sabarmati Chandkheda, Kalol Road, Adalaj, Gujarat 382421");
printf("\n\n------------------------CHILD HOMES-------------------------");
printf("\nChildren Home, Odhav");
printf("\nAddress:Opp.Police choki, GIDC,Odhav-Ahmedabad");
printf("\nPhone Number:079 22871023");
printf("\nChildren Home for Boys,Khanpur ");
printf("\nAddress:Near Kama Hotel, Khanpur, Ahmedabad");
printf("\nPhone Number:971494910");
printf("\nChildren Home for Girls,Sultan Ahmad Yatim Khana");
printf("\nAddress:Opp Sultan Ahemad Yatimkhana G.P.O, Salapa Road, Ahmedabad");
printf("\nPhone Number:079 25507110");
printf("\nVikas Gruh, paldi ");
printf("\nAddress:Opp Sharda Nagar Society, Post Paladi Dhumketu Marg, Paladi, Ahmedabad");
printf("\nPhone Number:079 26612788 079 26688788");
printf("\nBalghar Anathashram, Shri Sarvoday Saraswati Mandir");
printf("\nAddress:At.Babapur, Tal : Amreli");
printf("\nPhone Number:02792 277007");
printf("\nChildren Home for Boys, Anand");
printf("\nAddress:Madhudeep Bungalow, Near Gayatri Dining Hall, Nana Bazar, Vallabh Vidhyanagar, Anand-388120");
printf("\nPhone Number:02692 235336");
printf("\nJivan Anand Cheritable Trust");
printf("\nAddress:Enterprise Society, St.Xavier’s road, Padharia, ANAND-388 001, (Gujarat)");
printf("\nPhone Number:9924333518");
printf("\nShri Kasturba Stri Vikas Gruh");
printf("\nAddress:Patel Colony, KasturbaGandhi Marg,Jamnagar-361008");
printf("\nPhone Number:0288 2751728 2676983");
printf("\nShishumangal Trust");
printf("\nAddress:Opp Collector Banglow, Gandhigram, Junagadh-362001");
printf("\nPhone Number:0285 2623433");
printf("\nPradeshik Bal Sanrakshan Mandal Sanchalit Children Home");
printf("\nAddress:Opposite Judges Colony, Manjipura Road, Nadiad, Dist. Kheda");
printf("\nPhone Number:0268 25666498 9428486190");

   printf("\n Press <1> to update information.");
   printf("\n Press <2> for messages to citizens.");
   scanf("%d",&nchoice);
   switch(nchoice)
   {
   	case 1:
   		printf("\nEnter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Update Information-----------------");
   		printf("\n Enter the information for the updation:");
   		scanf("%s",&up);
   		printf("Thank you %s for the updates:)",na);
   		break;
   	case 2:
   		printf("Enter your name:");
   		scanf("%s",&na);
   		printf("\n------------------To Give message to citizens-----------------");
   		printf("\n Enter the message that is needed to be printed:");
   		scanf("%s",&m);
   		printf("%s,Your Message would be send to logged in users:)",na);
   		break;
   }
   break;
break;


    }
    
}}
int main()
{   
    char *userid="Vrisha",*pwd="172627";
    char name[10],pass[10];
    int len1,len2;
    printf("                                        GANPAT UNIVERSITY ICT");
    printf("\n                                      Vrisha Khandwala BDA7");
    printf("\n                                           PID 150");
    printf("\n                                          BATCH 14");
    printf("\n---------------------Enter log in details---------------------");
    printf("\nEnter your ID:");
         scanf("%s",&name);
    printf("\nEnter Password:");
         scanf("%s",&pass);
         
    len1=strcmp(userid,name);
    len2=strcmp(pwd,pass);
        
         if(len1==len2)
         {
             home();
         }
         else
         {
             printf("\n You have entered wrong data.");
            
         }
}


      
      


