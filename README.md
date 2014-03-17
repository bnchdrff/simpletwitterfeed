Simple Twitter Feed
===================

Forked from https://drupal.org/sandbox/bobbydank/2045997

Modified to use a separate php library for accessing Twitter API using a bearer token.

## Summary

This is a simple module that uses Twitter's API 1.1 to get an unordered
HTML list of latest tweets based on your Twitter username. The module
creates a block that can be put in any region. The block's configuration
holds all the fields needed to fetch the feed. Options are currently limited
for 1.0 release but more features could follow if the requests are there.
Use the comments below to request features.

## Requirements

Drupal 7.x

## Installation

Enabling module will create the block

Once created, you will need to create a Twitter Application to obtain
OAuth codes that are compliant with Twitter's 1.1 API.

## Configuration



## Customization

The module returns an unordered, HTML list of the tweets. Any styling can
be handled in your theme's css files.

## Troubleshooting

For help setting up this module or a Twitter application, go to:
http://catchylabs.com/drupal/simple-twitter-feed/help

## Credits

Current contributors

Bobby - bobby@catchylabs.com

Benjamin Chodoroff - github.com/bnchdrff