CREATE TABLE SPONSOR
(
   id                INT unsigned  NOT NULL AUTO_INCREMENT,
   name              VARCHAR(64)   NOT NULL,
   email             VARCHAR(64)   NOT NULL,
   password          VARCHAR(64)   NOT NULL,
   phone             BIGINT(10) unsigned  NOT NULL,
   address           VARCHAR(256),
   point_value       DOUBLE NOT NULL,
   PRIMARY KEY (id)
);
CREATE TABLE ADMIN
(
   id                INT unsigned  NOT NULL AUTO_INCREMENT,
   name              VARCHAR(64)   NOT NULL,
   email             VARCHAR(64)   NOT NULL,
   password          VARCHAR(64)   NOT NULL,
   phone             BIGINT(10) unsigned  NOT NULL,
   address           VARCHAR(256),
   PRIMARY KEY (id)
);
CREATE TABLE DRIVER
(
   id                INT unsigned  NOT NULL AUTO_INCREMENT,
   name              VARCHAR(64)   NOT NULL,
   email             VARCHAR(64)   NOT NULL,
   password          VARCHAR(64)   NOT NULL,
   phone             BIGINT(10) unsigned  NOT NULL,
   address           VARCHAR(256),
<<<<<<< HEAD
   points            INT unsigned,
=======
   points            INT unsigned  NOT NULL,
>>>>>>> 545cd10b45572d2c6ea0c8dbcb77e9c3181f6045
   PRIMARY KEY (id)
);
CREATE TABLE DRIVER_SPONSOR
(
   id                INT unsigned  NOT NULL AUTO_INCREMENT,
   driver_id         INT unsigned NOT NULL,
   sponsor_id        INT unsigned NOT NULL,
   PRIMARY KEY (id),
   FOREIGN KEY (driver_id) REFERENCES DRIVER(id),
   FOREIGN KEY (sponsor_id) REFERENCES SPONSOR(id)
);
CREATE TABLE AMAZON_ITEM
(
   item_id                INT unsigned  NOT NULL AUTO_INCREMENT,
   name              VARCHAR(64)   NOT NULL,
   price             DOUBLE        NOT NULL,
   description       VARCHAR(2048),
   url               VARCHAR(256)  NOT NULL,
   availability      BOOLEAN       NOT NULL Default TRUE,
   PRIMARY KEY (item_id)
);
CREATE TABLE AMAZON_ITEM_IMAGE
(
   image_url         VARCHAR(1024) NOT NULL,
   amazon_item_id    INT unsigned  NOT NULL,
   PRIMARY KEY (amazon_item_id),
   FOREIGN KEY (amazon_item_id) REFERENCES AMAZON_ITEM(item_id)
);
CREATE TABLE CATALOG
(
   cat_id            INT unsigned NOT NULL AUTO_INCREMENT,
   my_sponsor_id     INT unsigned NOT NULL,
   PRIMARY KEY (cat_id),
   FOREIGN KEY (my_sponsor_id) REFERENCES SPONSOR(id)
);
CREATE TABLE CATALOG_AMAZON_ITEM
(
   my_catalog_id     INT unsigned NOT NULL,
   my_amazon_item_id INT unsigned NOT NULL,
   PRIMARY KEY (my_catalog_id, my_amazon_item_id),
   FOREIGN KEY (my_catalog_id) REFERENCES CATALOG(cat_id),
   FOREIGN KEY (my_amazon_item_id) REFERENCES AMAZON_ITEM(item_id)
);