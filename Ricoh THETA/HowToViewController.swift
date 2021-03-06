//
//  HowToViewController.swift
//  Ricoh THETA
//
//  Created by 下村一将 on 2016/08/15.
//  Copyright © 2016年 kazu. All rights reserved.
//

import UIKit

class HowToViewController: UIViewController {

    @IBOutlet weak var webView: UIWebView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        setupWebView()
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func setupWebView() {
        // index.htmlのパスを取得する
        let path:String = NSBundle.mainBundle().pathForResource("howTo", ofType: "html")!
        let url = NSURL(fileURLWithPath: path)
        
        // リクエストを生成する
        let urlRequest = NSURLRequest(URL: url)
        
        // 指定したページを読み込む
        webView.loadRequest(urlRequest)
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
