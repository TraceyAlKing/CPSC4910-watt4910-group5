


INSERT INTO SPONSOR ( id, name, email, password, phone, address, point_value ) 
   VALUES ( 1, "TalanjiExpress", "forever@hotmail.co.net.guam", "rotandwither", 7468992486, "192 Talanji Lane", 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, address, point_value ) 
   VALUES ( 2, "Truckaholics Anonymous", "Jerry@truckaholics.com", "4wheeldrive", 8989894114, "112 Trucker Circuit", 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, address, point_value ) 
   VALUES ( 3, "Bobo Dunkins Trucking CO", "Bobo@Bobostrucking.com", "bobodoesntneedapassword", 8641396348, "226 Trucker Circuit", 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, address, point_value ) 
   VALUES ( 4, "Get Trucked", "Jimbo@gettrucked.net", "Truckmedaddy", 7748992486, "987 Not A Real Road", 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, address, point_value ) 
   VALUES ( 5, "Easy Roads", "Admin@easyroads.net", "driveaway", 1232487695, "32 I Cant Believe Its Not A Real Road", 1 );


INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 1, "Justin Stalker", "bobodunkins@hotmail.co.uk",  "bobo4evah", 2849964328, "76 Bobo Court", 123456789, "926290" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num ) 
   VALUES ( 2, "Po Nguyen", "imjustapoboy@yahoo.com", "dontjimmymyjohn", 4228999793, "12 Easy Come Lane", 952574789, "917284" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 3, "Ryan Anderson", "RAmastermind@gmail.com", "password", 2228675309, "53 Easy Go Creek", 017452937, "816276" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 4, "Ted Gunderson", "feelthegunder@gmail.com", "gunderbite", 2468972233, "872 Little High Place", 835205736, "918254" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num ) 
   VALUES ( 5, "Gold Dan", "thisisourworld@nightspire.net", "felclaws", 8971661668, "263 Little Low Street", 017582440, "982686" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 6, "Pete Danhill", "Pdanhill@userspace.net", "turkeysandwich", 7778889999, "87 Will You Let Me Go Court", 103382645, "918167" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 7, "Oswaldo Moriss", "Oswaldo@howdidigetthis.net", "dontlickme", 8641396348, "90 Nooo Court", 103972513, "817852" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 8, "Pete Jimbo", "thejimbonator@yahoo.com", "jimbonthesenuts", 2248976425, "807 We Will Not Let You Go Lane", 059472625, "817726" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num ) 
   VALUES ( 9, "philly bob", "phillybob236@neopets.com", "phillybpspill", 52136845326, "653 Thunderbolt And Lightning Road", 163729402, "919212" );

INSERT INTO DRIVER ( id, name, email, password, phone, address, license_num, license_plate_num) 
   VALUES ( 10, "Bob Sagget", "Saggenator226@hotmail.com", "iliketosag", 2288753951, "789 Very Very Frightening Road", 104826153, "912927" );

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (1,1,82);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
	VALUES (1,2,83);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
	VALUES (1,3,84);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (2,1,167);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (3,1,334);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (4,2,420);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (5,3,999);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (6,4,1839);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (7,4,455);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (8,5,62);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (9,5,34);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (10,2,79);


INSERT INTO ADMIN ( id, name, email, password, phone, address) 
   VALUES ( 1, "btharmo", "btharmo@clemson.edu", "btharmo", 1234567890, "32 Do You Even Lift Lane" );

INSERT INTO ADMIN ( id, name, email, password, phone) 
   VALUES ( 2, "Admin1", "Admin1@fake.com", "totallyreal", 4561327890, "101 Read Admin Road" );


INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "test", 0.0, "totallyreal", "real.com/real" );

INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "EEZ-Y Compact Travel Umbrella w/Windproof Double Canopy Construction - Auto Open/Close Button", 22.95, "EEZ-Y is an ultra-intelligent brand that redesigns and redefines high-quality products, making them better and smarter, EEZ-Y-er to use!
​
All our products are designed and crafted with the utmost care and attention to details and quality, ensuring we meet our customer’s needs with state of the art products, exceeding both in premium quality and innovative functionalities. 

The EEZ-Y Compact Travel Umbrella has been crafted with our customers needs in mind! Compact enough to fit in your purse, but also solid enough to withstand heavy downpours and powerful gusts of wind, it’s the perfect urban companion. ", "https://www.amazon.com/EEZ-Y-Compact-Umbrella-Windproof-Construction/dp/B017RO52LS/ref=gbps_tit_s-5_96dd_63834196?smid=ABW9N9WHXR0YQ&pf_rd_p=14bfbc74-d7e3-4fb1-8a72-53a5a41796dd&pf_rd_s=slot-5&pf_rd_t=701&pf_rd_i=gb_main&pf_rd_m=ATVPDKIKX0DER&pf_rd_r=W5SPQKBX044CNDKWDV6Q" );

INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "Mpow Bluetooth Adapter with 1 Second Turn On/Off Button", 15.99, "Bluetooth Receiver for 15 Hours Hands-Free Calls and Hi-Fi Music, Quick Charging Bluetooth Aux Adapter(CSR 4.1, Dual Link, Voice Assistant)", "https://www.amazon.com/Mpow-Bluetooth-Receiver-Hands-Free-Assistant/dp/B075JBLGLB/ref=gbps_tit_s-5_96dd_e71090c8?smid=A1E57UY6AMKO25&pf_rd_p=14bfbc74-d7e3-4fb1-8a72-53a5a41796dd&pf_rd_s=slot-5&pf_rd_t=701&pf_rd_i=gb_main&pf_rd_m=ATVPDKIKX0DER&pf_rd_r=XCJRZRW2W86XYB12BGZ7" );

INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "15 Inch Leather Vintage Rustic Crossbody Messenger Satchel Bag Gift Men Women", 67.49, "Business Work Briefcase Carry Laptop Computer Book Handmade Rugged & Distressed (Walnut Brown) ", "https://www.amazon.com/Crossbody-Messenger-Business-Briefcase-Distressed/dp/B07GLTQXYF?ref_=Oct_DLandingS_PC_b8268391_NA&smid=A11ZONG3SFCFWG" );

INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "JETech Screen Protector for Apple iPhone 8 and iPhone 7", 9.99, "-Pack. Specifically designed to fit iPhone 8, iPhone 7 4.7 models. (NOTE: Due to the round edge of iPhone, the screen protector will NOT cover the full screen, but only the flat area)", "https://www.amazon.com/JETech-Screen-Protector-4-7-Inch-Tempered/dp/B01KNVF4SI/ref=gbps_tit_s-5_96dd_c4aade31?smid=A1RI0YHZ8J2HZU&pf_rd_p=14bfbc74-d7e3-4fb1-8a72-53a5a41796dd&pf_rd_s=slot-5&pf_rd_t=701&pf_rd_i=gb_main&pf_rd_m=ATVPDKIKX0DER&pf_rd_r=BW347N6FQQ9QQ564DJ3J" );

INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "JOOLA Midsize Compact Table Tennis Table", 113.59, "MULTIPLE USE TABLES: Each half of the Midsize Table is almost a perfect square making the 2 halves great as separate standing multi-use tables when not in play", "https://www.amazon.com/JOOLA-Midsize-Compact-Tennis-Apartments/dp/B0012QJZTI?ref_=Oct_DLandingS_PC_a76250c3_NA&smid=ATVPDKIKX0DER" );
INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "Solimo 2-Ply Toilet Paper", 15.19, "Includes 30 bath tissue rolls(5 packs of 6 rolls); each roll has 350 w-ply sheets (10,500 sheets in total), Safe for standard sewer and septic systesms.", "https://www.amazon.com/gp/product/B07FGBSF45/ref=s9_acsd_al_bw_c_x_1_w?pf_rd_m=ATVPDKIKX0DER&pf_rd_s=merchandised-search-4&pf_rd_r=1P8NHTGK2C5DKEKJ68BK&pf_rd_r=1P8NHTGK2C5DKEKJ68BK&pf_rd_t=101&pf_rd_p=63b18eaf-9ef6-4c4b-b0ee-5a1d23ed2466&pf_rd_p=63b18eaf-9ef6-4c4b-b0ee-5a1d23ed2466&pf_rd_i=18294627011" );
INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "CUISINART Multiclad Cookware Set (8-Piece)", 129.99, "Set includes: 2.5 Quart Saucepan with Lid, 4 Quart Saute Pan with Helper and Cover, 6 Quart Stock Pot with Cover, 8 inch Skillet, 10 inch Skillet", "https://www.amazon.com/CUISINART-Multiclad-Cookware-Set-8-Piece/dp/B07FW18ZFJ/ref=gbps_tit_s-5_5baf_8f634540?smid=A1KWJVS57NX03I&pf_rd_p=a7e1c818-e7bc-4318-ae47-1f5300505baf&pf_rd_s=slot-5&pf_rd_t=701&pf_rd_i=gb_main&pf_rd_m=ATVPDKIKX0DER&pf_rd_r=G78HSV6V757J3HYHRW6Z" );
INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "Solimo Exfoliating Body Wash, 18 Fluid Ounce (Pack of 4)", 10.35, "Four 18-fluid ounce bottles of exfoliating body wash, Molasses ans shea butter help exfoliate and moisturize skin while cleansing", "https://www.amazon.com/Amazon-Brand-Solimo-Exfoliating-Fluid/dp/B07CJMJRPM/ref=lp_18294627011_1_15_a_it?srs=18294627011&ie=UTF8&qid=1542147329&sr=8-15" );
INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "JOOLA 4-Player Indoor Table Tennis Hit Set", 15.99, "totallyreal", "real.com/real" );
INSERT INTO AMAZON_ITEM ( name, price, description, url) 
   VALUES ( "BEDSURE Sherpa Fleece Blanket ", 14.95, "BEDSURE Dual Sided Super Soft Blanket with Fleece Face and Plush Sherpa reverse offers you different senses of softness to improve your sleep with one side of smooth and fluffy to the other - Bring you ultimate soft and warmth with 220 GSM Fleece top and 280 GSM Sherpa reverse blanket .", "https://www.amazon.com/BEDSURE-Sherpa-Fleece-Blanket-Microfiber/dp/B01LEWILYE/ref=gbps_tit_s-5_5baf_016bd14e?smid=A3LDROY0BE4ISH&pf_rd_p=a7e1c818-e7bc-4318-ae47-1f5300505baf&pf_rd_s=slot-5&pf_rd_t=701&pf_rd_i=gb_main&pf_rd_m=ATVPDKIKX0DER&pf_rd_r=G78HSV6V757J3HYHRW6Z" );


INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("umbrella.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("Bluetooth.jpg", 2);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("leather_bag.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("screen_protector.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("tennis_table.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("toilet_paper.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("cookware.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("body_wash.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("tennis_set.jpg", 1);
INSERT INTO AMAZON_ITEM_IMAGE (image_path, amazon_item_id)
	VALUES("blanket.jpg", 1);

INSERT INTO CATALOG ( my_sponsor_id) 
   VALUES ( 1 );

INSERT INTO CATALOG ( my_sponsor_id) 
   VALUES ( 2 );

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 1,1 );

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 1,2 );

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 2,1 );

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 2 ,2);

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 2 ,3);

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 2,4);

INSERT INTO CATALOG_AMAZON_ITEM ( my_catalog_id,  my_amazon_item_id) 
   VALUES ( 2,5 );