using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data;
using System.IO;

public partial class inbox : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)

    {
        layers.Visible = false;
        outers.Visible = false;
        inners.Visible = false;
        if (Session["name"] != null && Session["name"].ToString() != "")
        {
            Label1.Text = Session["name"].ToString();

            Label2.Text = Session["email"].ToString() + "<br/>" + Session["mob"].ToString();

            Image1.ImageUrl = Session["img"].ToString();
           
            
        }
        else
        {
            Response.Redirect("~/Default.aspx");
        }
            DataSet ds = Class1.fetch("select * from msg1 where to_email='"+Session["email"].ToString()+"'");
            if (ds.Tables[0].Rows.Count != 0)
            {
                GridView1.DataSource = ds;
                GridView1.DataBind();
            }
            if (Request.QueryString["msgid"] != null)
            {
                DataSet x = Class1.fetch("select * from msg1 where msg_id='" + Request.QueryString["msgid"] + "'");
                if (x.Tables[0].Rows.Count != 0)
                {
                    Session["msgid"] = x.Tables[0].Rows[0][0].ToString();
                    Session["toemail"] = x.Tables[0].Rows[0][1].ToString();
                    Session["myemail"] = x.Tables[0].Rows[0][2].ToString();
                    Session["toimgurl"] = x.Tables[0].Rows[0][3].ToString();
                    Session["myimgurl"] = x.Tables[0].Rows[0][4].ToString();
                    Session["ccemail"] = x.Tables[0].Rows[0][5].ToString();
                    Session["title"] = x.Tables[0].Rows[0][6].ToString();
                    Session["body"] = x.Tables[0].Rows[0][7].ToString();
                    Session["atturl"] = x.Tables[0].Rows[0][8].ToString();
                    Session["dt"] = x.Tables[0].Rows[0][9].ToString();
                    layerc.Visible = true;
                    outerc.Visible = true;
                    innerc.Visible = true;
                    Label3.Text = Session["dt"].ToString();
                    Label5.Text = Session["myemail"].ToString();
                    Label6.Text = Session["toemail"].ToString();
                    Label11.Text = Session["title"].ToString();
                    TextBox5.Text = Session["body"].ToString();
                    HyperLink1.NavigateUrl = Session["atturl"].ToString();
                    //  Response.Redirect("~/inboxcontent.aspx?"+Session["msgid"].ToString());
                }

            }
            else
            {
                layerc.Visible = false;
                outerc.Visible = false;
                innerc.Visible = false;
            }
           
        }
    
    protected void Button1_Click1(object sender, EventArgs e)
    {
        Session.Abandon();
        Response.Redirect("~/Default.aspx");

    }
    protected void GridView1_SelectedIndexChanged(object sender, EventArgs e)
    {

    }
    protected void ImageButton2_Click(object sender, ImageClickEventArgs e)
    {
      //  string myemail = Session["email"].ToString();
        DataSet x = Class1.fetch("select * from msg1 where my_email='"+Session["email"].ToString()+"'");
        if (x.Tables[0].Rows.Count != 0)
        {
            Session["id"] = x.Tables[0].Rows[0][0].ToString();
            Session["to_email"] = x.Tables[0].Rows[0][1].ToString();
            Session["my_email"] = x.Tables[0].Rows[0][2].ToString();
            Session["to_imgurl"] = x.Tables[0].Rows[0][3].ToString();
            Response.Redirect("~/Sent.aspx?" + Session["id"].ToString());
        }
        else
        {
            Response.Redirect("~/Sent.aspx");
        }
    }

    protected void ImageButton5_Click(object sender, ImageClickEventArgs e)
    {
       // Response.Redirect("~/inbox.aspx");
       layerc.Visible = false;
        outerc.Visible = false;
        innerc.Visible = false;
     
        }
   /* protected void ImageButton4_Click(object sender, ImageClickEventArgs e)
    {
        layers.Visible = true;
        outers.Visible = true;
        inners.Visible = true;
        DataSet x = Class1.fetch("select * from user where email='" + Session["email"].ToString() + "'");
        if (x.Tables[0].Rows.Count != 0)
        {

            TextBox8.Text = x.Tables[0].Rows[0][4].ToString();
            TextBox9.Text = x.Tables[0].Rows[0][5].ToString();
            Image2.ImageUrl = x.Tables[0].Rows[0][7].ToString();

        }
    }
    protected void Button3_Click(object sender, EventArgs e)
    {
        string filename = FileUpload2.FileName;
        string ex = Path.GetExtension(filename);
        if (ex == ".jpg" || ex == ".jpeg" || ex == ".png")
        {
            string imgurl = "~/emailpics/" + filename;
            string imgurl1 = "~/pics/" + filename;

            Image2.ImageUrl = imgurl.ToString();
            bool r = Class1.save("update user set pwd='" + TextBox8.Text + "',mob='" + TextBox9.Text + "',img='" + imgurl + "' where email='" + Session["email"].ToString() + "'");
            bool s = Class1.save("update msg set my_imgurl='" + imgurl1 + "' where my_email='" + Session["email"].ToString() + "'");
            bool t = Class1.save("update msg set to_imgurl='" + imgurl1 + "' where to_email='" + Session["email"].ToString() + "'");
            if (r == true && s == true && t == true)
            {
                layers.Visible = true;
                outers.Visible = true;
                inners.Visible = true;
                FileUpload2.PostedFile.SaveAs(Server.MapPath("~/emailpics/") + filename);
                FileUpload2.PostedFile.SaveAs(Server.MapPath("~/pics/") + filename);
                Label3.Text = "Changes saved successfully";
            }
            else
            {
                TextBox8.Text = "";
                TextBox9.Text = "";
            }

        }
    }*/

    protected void ImageButton4_Click(object sender, ImageClickEventArgs e)
    {
        layers.Visible = true;
        outers.Visible = true;
        inners.Visible = true;
        DataSet x = Class1.fetch("select * from user1 where email='" + Session["email"].ToString() + "'");
        if (x.Tables[0].Rows.Count != 0)
        {

            TextBox8.Text = x.Tables[0].Rows[0][4].ToString();
            TextBox9.Text = x.Tables[0].Rows[0][5].ToString();
            Image2.ImageUrl = x.Tables[0].Rows[0][7].ToString();

        }
    }
    protected void ImageButton3_Click(object sender, ImageClickEventArgs e)
    {
        Response.Redirect("~/Draft.aspx");
    }
    protected void Button3_Click(object sender, EventArgs e)
    {
        string filename = FileUpload2.FileName;
        string ex = Path.GetExtension(filename);
        if (ex == ".jpg" || ex == ".jpeg" || ex == ".png")
        {
            string imgurl = "~/emailpics/" + filename;
            string imgurl1 = "~/pics/" + filename;

            Image2.ImageUrl = imgurl.ToString();
            bool r = Class1.save("update user1 set pwd='" + TextBox8.Text + "',mob='" + TextBox9.Text + "',img='" + imgurl + "' where email='" + Session["email"].ToString() + "'");
            bool s = Class1.save("update msg set my_imgurl='" + imgurl1 + "' where my_email='" + Session["email"].ToString() + "'");
            bool t = Class1.save("update msg set to_imgurl='" + imgurl1 + "' where to_email='" + Session["email"].ToString() + "'");
            if (r == true && s == true && t == true)
            {
                layers.Visible = true;
                outers.Visible = true;
                inners.Visible = true;
                FileUpload2.PostedFile.SaveAs(Server.MapPath("~/emailpics/") + filename);
                FileUpload2.PostedFile.SaveAs(Server.MapPath("~/pics/") + filename);
                Label4.Text = "Changes saved successfully";
            }
            else
            {
                TextBox8.Text = "";
                TextBox9.Text = "";
                Label4.Text = "Changes not saved";
            }

        }
    }
}