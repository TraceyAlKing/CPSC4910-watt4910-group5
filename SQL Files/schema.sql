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
   points            INT unsigned,
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
   id                INT unsigned  NOT NULL AUTO_INCREMENT,
   name              VARCHAR(64)   NOT NULL,
   price             DOUBLE        NOT NULL,
   description       VARCHAR(2048),
   url               VARCHAR(256)  NOT NULL,
   PRIMARY KEY (id)
);
CREATE TABLE AMAZON_ITEM_IMAGE
(
   image_url         VARCHAR(1024) NOT NULL,
   amazon_item_id    INT unsigned  NOT NULL,
   PRIMARY KEY (amazon_item_id),
   FOREIGN KEY (amazon_item_id) REFERENCES AMAZON_ITEM(id)
);
CREATE TABLE CATALOG
(
   id                INT unsigned NOT NULL AUTO_INCREMENT,
   my_sponsor_id     INT unsigned NOT NULL,
   PRIMARY KEY (id),
   FOREIGN KEY (my_sponsor_id) REFERENCES SPONSOR(id)
);
CREATE TABLE CATALOG_AMAZON_ITEM
(
   my_catalog_id     INT unsigned NOT NULL,
   my_amazon_item_id INT unsigned NOT NULL,
   PRIMARY KEY (my_catalog_id, my_amazon_item_id),
   FOREIGN KEY (my_catalog_id) REFERENCES CATALOG(id),
   FOREIGN KEY (my_amazon_item_id) REFERENCES AMAZON_ITEM(id)
);