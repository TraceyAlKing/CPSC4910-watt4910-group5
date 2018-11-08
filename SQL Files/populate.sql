


INSERT INTO SPONSOR ( id, name, email, password, phone, point_value ) 
   VALUES ( 1, "talanjiexpress", "forever@hotmail.co.net.guam", "rotandwither", 7468992486, 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, point_value ) 
   VALUES ( 2, "Truckaholics Anonymous", "Jerry@truckaholics.com", "4wheeldrive", 8989894114, 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, point_value ) 
   VALUES ( 3, "Bobo Dunkins Trucking CO", "Bobo@Bobostrucking.com", "bobodoesntneedapassword", 8641396348, 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, point_value ) 
   VALUES ( 4, "Get Trucked", "Jimbo@gettrucked.net", "Truckmedaddy", 7748992486, 1 );

INSERT INTO SPONSOR ( id, name, email, password, phone, point_value ) 
   VALUES ( 5, "Easy Roads", "Admin@easyroads.net", "driveaway", 1232487695, 1 );


INSERT INTO DRIVER ( id, name, email, password, phone ) 
   VALUES ( 1, "justin stalker", "bobodunkins@hotmail.co.uk",  "bobo4evah", 2849964328 );

INSERT INTO DRIVER ( id, name, email, password, phone ) 
   VALUES ( 2, "Po Nguyen", "imjustapoboy@yahoo.com", "dontjimmymyjohn", 4228999793 );

INSERT INTO DRIVER ( id, name, email, password, phone) 
   VALUES ( 3, "Ryan Anderson", "RAmastermind@gmail.com", "password", 2228675309 );

INSERT INTO DRIVER ( id, name, email, password, phone) 
   VALUES ( 4, "Ted Gunderson", "feelthegunder@gmail.com", "gunderbite", 2468972233 );

INSERT INTO DRIVER ( id, name, email, password, phone ) 
   VALUES ( 5, "Gold Dan", "thisisourworld@nightspire.net", "felclaws", 8971661668 );

INSERT INTO DRIVER ( id, name, email, password, phone) 
   VALUES ( 6, "Pete Danhill", "Pdanhill@userspace.net", "turkeysandwich", 7778889999 );

INSERT INTO DRIVER ( id, name, email, password, phone) 
   VALUES ( 7, "Oswaldo Moriss", "Oswaldo@howdidigetthis.net", "dontlickme", 8641396348);

INSERT INTO DRIVER ( id, name, email, password, phone) 
   VALUES ( 8, "Pete Jimbo", "thejimbonator@yahoo.com", "jimbonthesenuts", 2248976425 );

INSERT INTO DRIVER ( id, name, email, password, phone ) 
   VALUES ( 9, "philly bob", "phillybob236@neopets.com", "phillybpspill", 52136845326 );

INSERT INTO DRIVER ( id, name, email, password, phone) 
   VALUES ( 10, "Bob Sagget", "Saggenator226@hotmail.com", "iliketosag", 2288753951);

INSERT INTO DRIVER_SPONSOR(driver_id, sponsor_id, points)
   VALUES (1,1,82);

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


INSERT INTO ADMIN ( id, name, email, password, phone) 
   VALUES ( 1, "btharmo", "btharmo@clemson.edu", "btharmo", 1234567890 );

INSERT INTO ADMIN ( id, name, email, password, phone) 
   VALUES ( 2, "Admin1", "Admin1@fake.com", "totallyreal", 4561327890 );


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